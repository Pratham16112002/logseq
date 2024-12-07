- Generally used for solving the problems like next greater element , previous greater elements and where we require such scenarios.
- __Types__
	- Strictly increasing.
	- Strictly decreasing.
- __Generic template__
	- ```
	  stack [] 
	  
	  for( i from 0 to N){
	  	while(stack not empty() && s.top() // some operation){
	      	stack.pop() // this will pop all the elements which does not follow 
	          stack property.
	      }
	      if(st.empty()){
	      	means till this index all the condition are satisfied.
	      }
	      st.push(nums[i])
	  }
	  ```
- ## 132 Pattern
	- Given an array of `n` integers `nums`, a **132 pattern** is a subsequence of three integers `nums[i]`, `nums[j]` and `nums[k]` such that `i < j < k` and `nums[i] < nums[k] < nums[j]`.
	- We need to return true if this pattern is found else return false
	- We will maintain a minimum array from the given nums array which will maintain the minimum till now element.
	- Using this array we will maintain the stack with only those elements which are greater than minimum element at that index.
	- Think like this
		- The minimum