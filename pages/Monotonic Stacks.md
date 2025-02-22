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
  id:: 67541218-07a9-4139-9225-1fa66bb8dcff
	- Given an array of `n` integers `nums`, a **132 pattern** is a subsequence of three integers `nums[i]`, `nums[j]` and `nums[k]` such that `i < j < k` and `nums[i] < nums[k] < nums[j]`.
	- We need to return true if this pattern is found else return false
	- We will maintain a minimum array from the given nums array which will maintain the minimum till now element.
	- Using this array we will maintain the stack with only those elements which are greater than minimum element at that index.
	- Think like this
		- The minimum element array will represent the number => 1.
		- Current element index will represent the number => 3.
		- The stack top will represent the number => 2.
	- id:: 675417ef-3749-4456-be40-1ae441ae0279
	  ```
	  while(!stack.empty() && stack.top() < minimum[i]){
	  	st.pop().
	  }
	  ```
	- At every iteration we will check this case.
		- id:: 67541850-c289-4430-9ed3-f5e53f77515c
		  ```
		  if(!stack.empty() && nums[i] > st.top() ){
		  	// hurry we have found our answer.
		  }
		  ```
	- we will go on adding every element to the stack unless its equal to most minimum elements ( will skip that iteration ).
- ## Trapping rain water
	- Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.
	- ![Heights](https://assets.leetcode.com/uploads/2018/10/22/rainwatertrap.png)
	- Cases when water will be stored
		- If the _Left_max_ and _Right_max_ is greater current height.
		- `area = height[i] - min(Left_max,Right_max)`
	-