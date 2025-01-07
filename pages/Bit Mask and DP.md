- Process of utilizing the bit representation to solve real world problems.
- ## Maximize the score after N operations
	- Given an integer array `2*n` integers we need to apply n operations.
		- Each operation
			- Chose two indicies x and y.
			- `score = gcd(nums[x],nums[y]) * (i)` where i is the operation number.
			- remove the index x and y from the array.
	- Initial thinking
		- we need to find pairs.
		- we need to think of some way to mark the already chosen.
	- We could use __bit mask__ for marking already chosen indicies.
	  id:: 6753099c-e45d-49f6-adf9-f14e401b6923
	- Now we could simply try out all the possible pairs and mark those indices using mask.
	- ```
	  class Solution {
	  public:
	      int dp[18][1000009]; 
	      int help(int op, int mask , vector<int> &nums){
	          if(op > nums.size() / 2){
	              return 0;
	          }
	          if(dp[op][mask] != -1) {
	              return dp[op][mask];
	          }
	          int maxi = INT_MIN;
	          for(int i = 0 ; i<nums.size() ; i++) {
	              for(int j = i + 1 ; j<nums.size() ; j++){
	                  if(mask & (1 << i) || mask & (1 << j)){
	                      continue;
	                  }
	                  int score = op * __gcd(nums[i],nums[j]);
	                  int new_mask = mask | 1 << i;
	                  new_mask = new_mask | 1 << j;
	                 maxi = max(maxi,score + help(op+1,new_mask,nums)); 
	              }
	          }
	          return dp[op][mask] = maxi;
	          
	      }
	      int maxScore(vector<int>& nums) {
	          memset(dp,-1,sizeof(dp));
	          return help(1,0,nums);
	      }
	  };
	  ```
	- Reason for `dp[18][100009]` 18 is because the constraints of n are to low which are <= 7.
		- The mask can be maximum if all the bits of the maximum number in the given array are set.
	- Time complexity : `O(n^n*`