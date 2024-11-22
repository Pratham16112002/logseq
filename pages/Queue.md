- A Queue implements FIFO ordering . As in a line or queue at a ticket stand , items are removed from the data structure in the same order they are added .
	- Operations
		- 1. **Add()** : add an item to the end of the list . 
		  2. **remove()** : Remove the first item in the list .
		  3. **peek()**: Return the top of the queue . 
		  4. **isEmpty()**: Return true if and only if the queue is empty
- #### Sliding Window Maximum
	- [Link to problem ](https://leetcode.com/problems/sliding-window-maximum/)
	- **Brute Force Solution**
		- Approach we will run nested for loops first loop will run k times and we will calculate the maximum from the given k windows size . 
		  **Time Complexity => O(N*K)**
		  **Code**
		  ```
		      vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		          int j , max ;
		          vector<int> ans;
		          for(int i = 0 ; i<= nums.size() - k  ; i++){
		              max = nums[i];
		              for(int j = 1 ; j<k ; j++){
		                  if(nums[i+j] > max){
		                      max = nums[i+j];
		                  }
		              }
		              ans.push_back(max);
		          }
		          return ans;
		      }
		  ```
	- **Optimal Approach Using Max Heap** :
		- Approach is explained in [Video Link ](https://youtu.be/MCvGwtkqJS0)
		  ^^Time Complexity => O(NLogK)^^
		  **Code :**
		  ```
		   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
		          vector<int> ans;
		          int l = 0 , r = k - 1;
		          priority_queue<pair<int,int>> p;
		          for(int i = 0 ;i<=r ; i++) {
		              p.push({nums[i],i});
		          }
		          ans.push_back(p.top().first);
		          l++;
		          r++;
		          while(r<nums.size()){
		              p.push({nums[r],r});
		              if(p.top().second<=r && p.top().second>=l){
		                  ans.push_back(p.top().first);
		                  r++;
		                  l++;
		              }
		              else{
		                  p.pop();
		              }
		          }
		          return ans;
		      }
		  ```
	- **Deque Apporach :** 
	  We will create a deque and then make the subarray of the given k size in decreasing order , and once we make the subarray we will automatically get the maximum element from the subarray at the front of the deque data structure , we will do this until we reach the end of our loop , while traversing the array we will be removing elements which are out of bounds . So the dequeue will only store the size of the sliding maximum window . 
	  ^^Time Complexity => O(N)^^
	  Code : 
	  ```
	   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	          deque<int> dq ;
	          vector<int> ans;
	          for(int i = 0 ; i<nums.size() ; i++){
	              if(!dq.empty() && dq.front() == i-k){ // check for out of bounds in our deque 
	                  dq.pop_front();
	              }
	              while(!dq.empty() && nums[dq.back()] < nums[i]){ // remvoes all the elements that are smaller than nums of i 
	                  dq.pop_back();
	              }
	              dq.push_back(i);
	              if(i>=k-1){
	                  ans.push_back(nums[dq.front()]); // to put the front element to the answer vector 
	              }
	          }
	          return ans;
	      }
	  ```
-