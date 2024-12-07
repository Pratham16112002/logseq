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
-