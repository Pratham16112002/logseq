- Its an more smart version of recursion were we are required to undo the changes done to find an answer which was not needed.
- ## Restore IP addresses
	- A **valid IP address** consists of exactly four integers separated by single dots. Each integer is between `0` and `255` (**inclusive**) and cannot have leading zeros.
	- For example, `"0.1.2.201"` and `"192.168.1.1"` are **valid** IP addresses, but `"0.011.255.245"`, `"192.168.1.312"` and `"192.168@1.1"` are **invalid** IP addresses.
	  
	  Given a string `s` containing only digits, return *all possible valid IP addresses that can be formed by inserting dots into *`s`. You are **not** allowed to reorder or remove any digits in `s`. You may return the valid IP addresses in **any** order.
	- _Initial thinking_
		- Recursion on every possible way of the IP address.
		- We have to add maximum 3 dots in an IP address.
		- while taking  care of Invalid IP addresses.
	- Code
		- ```
		  func help23(res *[]string, i int, dots int, res2 *[]string, s string) {
		  	if dots == 4 && i == len(s) {
		  		t_string := strings.Join(*res, ".")
		  		*res2 = append(*res2, t_string)
		  		return
		  	}
		  	if dots > 4 {
		  		return
		  	}
		  
		  	for j := i; j < help1(i+3, len(s)); j++ {
		  
		  		str_val := s[i:(i + (j - i + 1))]
		  		if strings.HasPrefix(str_val, "0") && j != i {
		  			continue
		  		}
		  		int_val, _ := strconv.Atoi(s[i:(i + (j - i + 1))])
		  		if int_val < 256 {
		  			dots++
		  			*res = append(*res, fmt.Sprint(int_val))
		  			help23(res, j+1, dots, res2, s)
		  			*res = (*res)[:len(*res)-1]
		  			dots--
		  		}
		  	}
		  }
		  ```
		- Base case :
			- when the number of dots are exceeded which is 4.
			- If the number of dots are exactly 4 and the iterator has reached the last index.
		- The for-loop make sure that we get substring of size 3