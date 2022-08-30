- Dynamic Programming is mainly an optimization over plain [recursion](https://www.geeksforgeeks.org/recursion/).
  The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later.
  This simple optimization reduces time complexities from exponential to polynomial .
- #### 0/1 Knapsack Problem ( DP )
	- **Question** : Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W.
	- ```
	  #include <bits/stdc++.h>
	  #include <iostream>
	  
	  int max(int a, int b) { return (a > b) ? a : b; }
	  
	  int Knap_sack(int W, int wt[], int val[], int n) {
	    // Base Case
	    if (n == 0 || W == 0) {
	      return 0;
	    }
	  
	    if (wt[n - 1] > W) {
	      return Knap_sack(W, wt, val, n - 1);
	    }
	  
	    else {
	      return max(val[n - 1] + Knap_sack(W - wt[n - 1], wt, val, n - 1),
	                 Knap_sack(W, wt, val, n - 1));
	    }
	  }
	  
	  int main(int argc, char *argv[]) {
	    int val[] = {60, 100, 120};
	    int wt[] = {10, 20, 30};
	    int W = 50;
	    int n = sizeof(val) / sizeof(val[0]);
	    std::cout << Knap_sack(W, wt, val, n) << std::endl;
	    return 0;
	  }
	  ```
	-
-