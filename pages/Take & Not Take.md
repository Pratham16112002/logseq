## Delete and Earn
	- You are given an integer array `nums`. You want to maximize the number of points you get by performing the following operation any number of times:
	- Pick any `nums[i]` and delete it to earn `nums[i]` points. Afterwards, you must delete **every** element equal to `nums[i] - 1` and **every** element equal to `nums[i] + 1`.
	  
	  Return *the **maximum number of points** you can earn by applying the above operation some number of times*.
	- _Initial thinking_
		- Greedy ( but wont work here ).
		- Try out all possible ways
		- Recursive function
			- $$f(index) = f(index,previouslytakenelement) $$
			- This will work but we are using extraneous memory by considering the previously taken element.
			- we can remove it.
	- _Optimal Way_
		- Sort the array.
		- By sorting we can get rid of the case `nums[index] - 1`.
		- $$f max(f(index),sum + f(i))  $$
		- At every index we have two option either we can take that element or skip that element.
			- If we choose to take that element then
				- we can and need to take all the element equal to it and also skip all elements = element + 1.
			- or else we can move to the next element.
	- ```
	  class Solution {
	  public: 
	  int dp[100001];
	      int help(int idx , vector<int> &nums ){
	          if(idx >= nums.size()){
	              return 0;
	          }
	          if(dp[idx] != -1) {
	              return dp[idx];
	          }
	          // either take the element 
	          int curr_ele = nums[idx];
	          int sum = nums[idx];   
	          int i = idx + 1;
	          while(i < nums.size() && nums[i] == curr_ele){
	              sum += nums[i];
	              i++;
	          }
	          while(i < nums.size() && nums[i] == curr_ele + 1){
	              i++; // skipping all element + 1 
	          }
	          // either skip all the nums[idx] + 1
	          return dp[idx] = max( help(idx+1,nums),sum + help(i,nums));
	      }
	      int deleteAndEarn(vector<int>& nums) {
	          sort(nums.begin(),nums.end());
	         memset(dp,-1,sizeof(dp)); 
	          return help(0,nums);
	      }
	  }
	  
	  ```
- ## Perfect Squares
  id:: 675bce23-7498-4656-a1f5-c3ba532e8c0c
	- Given an integer `n`, return *the least number of perfect square numbers that sum to* `n`.
	- A **perfect square** is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, `1`, `4`, `9`, and `16` are perfect squares while `3` and `11` are not.
	- _Will greedy work here_ :
		- Nope It will not work
	- ```
	  class Solution {
	  public:
	      int dp[10001];
	      int help(int n){
	          if(n<0) {
	              return 0;
	          }
	          if(n == 0){
	             return 0 ;
	          }
	          if(dp[n] != -1) {
	              return dp[n];
	          }
	          int mini = INT_MAX;
	          for(int j = 1 ; j*j<=n ; j++){
	              mini = min(mini,1 + help(n - (j*j)));
	          }
	          return dp[n] = mini;
	      }
	      int numSquares(int n) {
	          memset(dp,-1,sizeof(dp));
	          return help(n);
	      }
	  };
	  ```
- ## Minimize the Subarray sum
	-