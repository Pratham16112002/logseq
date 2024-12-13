## Delete and Earn
	- You are given an integer array `nums`. You want to maximize the number of points you get by performing the following operation any number of times:
	- Pick any `nums[i]` and delete it to earn `nums[i]` points. Afterwards, you must delete **every** element equal to `nums[i] - 1` and **every** element equal to `nums[i] + 1`.
	  
	  Return *the **maximum number of points** you can earn by applying the above operation some number of times*.
	- _Initial thinking_
		- Greedy ( but wont work here ).
		- Try out all possible ways
		- Recursive function
			- $$f \left( index  \right)   =  f \left( index.previouslytaken  \right)   $$
			- This will work but we are using extraneous memory by considering the previously taken element.
			- we can remove it.
	- _Optimal Way_
		- Sort the array.
		- By sorting we can get rid of the case `nums[index] - 1`.
		- $$f max(f(index),sum + f(i))  $$
		-
		-
		-