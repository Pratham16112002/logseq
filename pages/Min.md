- priority_queue supports a constructor that requires two extra arguments to make it min-heap.
  ```
  priority_queue <int, vector<int>, greater<int> > pq;
  ```
  ^^priority_queue <Type, vector<Type>, ComparisonType > min_heap; ^^
- #### Maximum Performance of a Team
	- Appraoch :- 
	  1. Sort Using Efficiency 
	  2. Min heap of size K ( at most )
	  3. sum * minEfficiency
	  [Solution ](https://youtu.be/vlZYnDtJayw)
	  Code: 
	  ```
	    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
	          vector<pair<int,int>> v ;
	          priority_queue <int, vector<int>, greater<int> > min_heap;
	          for(int i = 0 ; i<n ; i++){
	              v.push_back({efficiency[i],speed[i]});
	          }
	          long sum = 0 , ans = 0;
	          sort(v.begin(),v.end());
	          for(int i = n-1 ; i>= 0 ; i--){
	              sum+=v[i].second;
	              min_heap.push(v[i].second);
	              if(min_heap.size() > k){
	                  sum  -= min_heap.top();
	                  min_heap.pop();
	              }
	              ans = max(ans,sum*v[i].first);
	              
	          }
	          return ans%1000000007;
	      }
	  ```
-