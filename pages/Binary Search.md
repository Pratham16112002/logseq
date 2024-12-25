## On result
	- ### Maximum number of character removal
		- You are given two strings `s` and `p` where `p` is a **subsequence **of `s`. You are also given a **distinct 0-indexed **integer array `removable` containing a subset of indices of `s` (`s` is also **0-indexed**).
		- You want to choose an integer `k` (`0 <= k <= removable.length`) such that, after removing `k` characters from `s` using the **first** `k` indices in `removable`, `p` is still a **subsequence** of `s`. More formally, you will mark the character at `s[removable[i]]` for each `0 <= i < k`, then remove all marked characters and check if `p` is still a subsequence.
		- Return *the **maximum** *`k`* you can choose such that *`p`* is still a **subsequence** of *`s`* after the removals*.
		- A **subsequence** of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.
		- _Initial thinking_
			- Do a brute force linear search on removal-able array and count the number of character after removing those indices from s the p is sill an subsequence of string s.
			- $$ O(n*k)$$
		- _Smart thinking_
			- We could do a binary search on the removal-able array like this.
			- ```
			  	low := 0
			  	high := len(removable)
			  	for low <= high {
			  		mid := low + (high-low)/2
			  		temp := []rune(s)
			  		for i := 0; i < mid; i++ {
			  			temp[removable[i]] = '#'
			  		}
			  		tempStr := string(temp)
			  		if checkSubsequence(tempStr, p) {
			  			low = mid + 1
			  		} else {
			  			for i := 0; i < mid; i++ {
			  
			  			}
			  			high = mid - 1
			  		}
			  	}
			  	return high
			  
			  ```
			- ```
			  v v v v v v n n n n n n    //v is valid, n is not valid
			  ^                     ^ 
			  |                     |
			  low                  high
			  - When the binary search loop will end 
			  our pointers will be like this, so we will simply return h
			  v v v v v v n n n n n n    
			            ^ ^                     
			            | |                     
			            h l
			  ```
			- $$ O(log(n)*k)$$
			-