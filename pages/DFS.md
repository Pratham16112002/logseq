- It is basically a traversal ( Mainly recursive in nature ).
	- Depth-first search always follows a single path in the graph as long as it
	  finds new nodes. After this, it returns to previous nodes and begins to explore
	  other parts of the graph. The algorithm keeps track of visited nodes, so that it
	  processes each node only once.
	- Pick on vertex .
	- Call adjacent of that vertex .
	- Time  Complexity -> O(n+m) 
	  n = no of nodes , m = number of edges
	- Again call DFS of that adjacent vertex .
	  
	  ^^(Main DFS Function)^^
	  ```
	  void dfs(int node , unordered_map<int , bool > &visited, unordered_map<int> , list<int> , adj , vector<int> &component){
	     component.push_back(node);
	  visited[node]=true;
	  
	  for (auto i:adj[node]){
	       if(!visited[i]){
	  dfs(i,visited, adj , component );
	        }
	     } 
	  }
	  
	  unordered_map<int> , list<int> , adj ;
	  for(int i = 0 ; i<edges.size() ; i++){
	  int u = edges[i][0];
	  int v = edges[i][1];
	   adj[u].push_back(v);
	  adj[v].push_back(u);
	  }
	  
	  vector<vector<int>> ans;
	  unordered_map <int, bool > visited;
	  for ( int i = 0 ; i<V ; i++){
	          if(!visited[i]){
	  vector<int> component;
	  dfs(i,visited, adjList , component);
	  ans.push_back(component); 
	     }
	  }
	  return ans;
	  
	  ```
		-
		-
### Cycle Detection ( c++ )
	- Undirected Graph
		- ```
		   using namespace std;
		  
		  bool iscycle(int src ,vector<vector<int>> &adj , vector<bool> &visited , int parent){
		    visited[src]=true;
		    for(auto i : adj[src]){ // This loop to use to 
		        if(i!=parent){    // iterate through the adj list 
		            if(visited[i]){
		                return true;
		            }
		            if(!visited[i] and iscycle(i,adj,visited,src)){
		                return true;
		            };
		        }
		    }
		    return false;
		  }
		  int main(){
		    int n ,m ; 
		    cin>>n>>m;
		    vector<vector<int>> adj(n);
		    for(int i = 0 ; i<m ; i++){
		        int u,v ; cin>>u>>v;
		        adj[u].push_back(v);
		        adj[v].push_back(u);
		    }
		    bool cycle = false;
		    vector<bool> visited(n,false);
		    for(int i = 0  ;i<n ; i++){
		        if(!visited[i] and iscycle(i,adj,visited,-1)){
		            cycle=true;
		        }
		    }
		    if(cycle){
		        cout<<"Cycle is present"<<endl;
		    }
		    else{
		        cout<<"Cycle is not present"<<endl;
		    }
		    return 0;
		  }
		  ```
-
	- #+BEGIN_IMPORTANT
	  To Store the frequency of each element in the vector we can use the map to store it just like this 
	  ![2022_07_14_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f70b3d8c0-0091-4e8b-ac59-2d7130f61b1a2022_07_14_image.png?Expires=4811392668&Signature=eVKNg-Y949IfM-qXs4dVAfYF7jzoyv7FERVOgwXRUck7wuMY5hKXaXBk3r50VEhJuAlb9I3w6xgz8vpl2a8ilQWzrUaXew2z4v1eEq3DlB1Gcux75m6-jM2mM5dUSriSC~cbrNn8erHwGme4W4cjeWoA0JL3sFinHgHXMLReqjvkEHBATxkU-yDlTmufo8mI47vc5mGXjmSIeV0gAp-HyxV9-59FdisHkCWtn4SjsqIrq8IiqaY8ThHrRemw1YMgrkDtoceTKtkmtZJVKGTzX7GvZ4VLiVmCgoFZr8GEbZREniWotjgSEC1hVPSRMUq2B88WxNVucGI-DHTFXQ8Dbw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA) 
	  #+END_IMPORTANT
	-
	- #### Number with same consecutive differences
		- **Not Brute Force** -> First we will create out result vector and then we will handle a case when n is 1 then we will push 0 to the vector .
		  Then we will go for a loop from 1 to 0 and call the dfs function for every i 
		  we will check if n == 0 (**BASE CASE**) then we will push num to the vector and return . 
		  at last we will do two recursive calls for dfs first one with adding k  and second
		  without adding k to the current number and each time we call dfs N decreaes by 1 .
		  ```
		  void dfs(int num , int N , int K , vector<int>& result){
		          if(N==0){
		              result.push_back(num);
		              return;
		          }
		          int last_digit=num%10;
		          if(last_digit >= K ) dfs(num*10 + last_digit - K , N-1 , K, result);
		          if(K > 0 && last_digit+K < 10) dfs(num*10 + last_digit + K , N-1 , K , result);
		      }
		      vector<int> numsSameConsecDiff(int n, int k) {
		          vector<int> result;
		          if(n==1) result.push_back(0);
		          for(int i = 1 ; i<10 ; i++){
		              dfs(i, n-1 , k , result);
		          }
		          return result;
		      }
		  ```
	- #### Clone Graph ( Leetcode )
		- Approach ( ^^DFS^^ ) =>
		  1. We use HashMap to solve it and using DFS.
		  2. Initially our hash map will be empty and we try to map the old node with the new node or the copy node.
		  3. We start with any entry point.
		  4. I am using '1' as my entry point.
		  [Explanation with diagram](https://youtu.be/mQeF6bN8hMk)
		- ```
		  Node* cloneGraph(Node* node) {
		          unordered_map<Node*,Node*> mp;
		          if(node == NULL){
		              return NULL;
		          }
		          if(node->neighbors.size() == 0){
		              Node* clone = new Node(node->val);
		          }
		          return dfs(node,mp);
		      }
		      Node* dfs(Node* curr , unordered_map<Node* , Node*>& mp){
		          vector<Node*> nei ; 
		          Node* clone = new Node(curr->val);
		          mp[curr] = clone;
		          for(auto it : curr->neighbors){
		              if(mp.find(it)!=mp.end()){
		                  nei.push_back(mp[it]);
		              }
		              else{
		                  nei.push_back(dfs(it,mp));
		              }
		          }
		          clone->neighbors = nei;
		          return clone;
		      }
		  ```
	-