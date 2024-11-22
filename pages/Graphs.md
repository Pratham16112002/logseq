#### Shortest Path
	- **Bellman-Ford Algorithm**
		- Finds the shortest path from a starting node to all nodes of the graph .
		- Condition for this algo is :
		  graph should not contain any negative cycle in it .
		- If there are n no of vertices :
		  then no of relaxations : n - 1 ;
		- ^^Relax^^ : 
		  Suppose there are two vertices u and v and edges between them of some cost from u to v then : 
		  ```
		  //Algo for relax 
		  if(d[u] + c[u,v] < d[v]){
		  	d[v] = d[u] + c[v,u];
		  }
		  ```
		- First we will initialize the distance of all the vertices with infinity except the starting node which will be 0 .
		- Time complexity -> 
		  \begin{equation}
		  O \left(  \left| V  \right|   \left| E  \right|    \right)   
		  \end{equation}
		  O(n^{2})
		- #+BEGIN_NOTE
		  If there is a negative cycle in the graphs then bellman ford does not work .
		  #+END_NOTE
	- #### Bipartite Graph
		- A graph that can be coloured using exactly 2 colours such that no two adjacent nodes have the same colour.
		- Any graph that has an odd cycle length cannot have bipartite graph .
		- **BFS for checking bipartite**
			- Approach : Initially we will have a queue data structure and I will have first node pushed into it , we will also take another colour array ( This array will tell which colour the particular node is filled with ) 
			  There are two colours in array 0/1 . 
			  We traverse the adjacent node of the current node and mark 1 if previous colour was 0 and vice versa . 
			  When we check for adjacent nodes of an node , if we came across an node that is already coloured then we check if colour of the other node is different or not . 
			  If we found an node that is node coloured then we just make if coloured to the exact opposite of the current node colour .
			  While you are colouring the nodes make sure to put then in the queue data structure . 
			  And the moment you see two adjacent nodes with same colour you return false , otherwise return true.
			- ^^Time Complexity : O(N+E)^^
			  ^^Space Complexity : O(N+E) + O(N) + O(N)^^
	- #### Topological Sort
		- Linear ordering of vertices such that if there is an edge u -> v , u appears before v in that ordering , u should always appear before v .
		- Only for DAG ( Directed Acyclic Graph )
		- Approach  ( BFS ): 
		  1.  First we will create a visited array and a stack of type int , and call  sort function for each vertex that is not visited . 
		  2. In the sort function we will first make the node as visited and traverse the adjacent nodes and if the adjacent node is not visited then we call the make it visited , 
		  3. When the loop for each adjacent node is completed we just add the node to our stack 
		  4. At last we just print the stack elements . 
		  **Code**
		  ```
		  
		  void dfs(int node , vector<int> adj[] , int vis[] , stack<int> &st){
		    vis[node] = 1;
		    for(auto it : adj[node]){
		      if(vis[it] == -1){
		        dfs(it,adj,vis,st);
		      }
		    }
		    st.push(node);
		  }
		  
		  
		  void toppo_sort(vector<int> adj[] , int n){
		    int vis[n];
		    stack<int> st;
		    memset(vis,-1,sizeof(vis));
		    for(int i =  0 ; i<n ; i++){
		      if(vis[i]==-1){
		        dfs(i,adj,vis,st);
		      }
		    }
		    vector<int> ans;
		    while(!st.empty()){
		      cout<< st.top() << " ";
		      st.pop();
		    } 
		  }
		  
		  
		  ```
	- #### Find the Shortest Path from source
		- Approach : 
		  1. First we will take the input of the graph we will declare a adj vector of type ^^vector<pair<int,int>> adj[N]^^ , where N is the number of vertices .
		  2. Secondly we will declare a visited array and a stack of type int we will call the topological sort  for all the vertices that are not visited . 
		  3. After that the order will be stored in the stack , then we declare another array of dist initially it will be Infinite on all places .
		  4. We will do while loop till the stack is not empty and assign the top of the stack as a  node and then traverse its adjacent nodes if the distance towards the adjacent node is not infinity then we relax .
		  5. In relax if the sum of path till the current node  + the weight of the edge is less then adjacent node then we just update the dist of that adjacent node .
		  6. At last we just print the dist array .
		- Time complexity : O(V+E)
		- **Code :**
		  ```
		  void ShortestPath(vector<pair<int, int>> adj[], int n, int src) {
		    int vis[n] ;
		    memset(vis,0,sizeof(vis));
		    stack<int> st;
		    for (int i = 0; i < n; i++) {
		      if (!vis[i]) {
		        toposort(i, vis, st, adj);
		      }
		    }
		    int dist[n];
		    for (int i = 0; i < n; i++) {
		      dist[i] = 1e9;
		    }
		    dist[src] = 0;
		    while (!st.empty()) {
		      int node = st.top();
		      st.pop();
		      // the below condition means that has that node been reached before
		      if (dist[node] != 1e9) {
		        for (auto it : adj[node]) {
		          if (dist[node] + it.second < dist[it.first]) {
		            dist[it.first] = dist[node] + it.second;
		          }
		        }
		      }
		    }
		    for (int i = 0; i < n; i++) {
		      (dist[i] == 1e9) ? cout << "INF" : cout << dist[i] << " ";
		    }
		    cout<<endl;
		  }
		  
		  ```
	- #### Djikstra's algorithm
		- The Algorithm Does not work with negative cycle's in the graph
		- This is based on BFS approach
		- This algo is for undirected  graphs
		- Approach : 
		  1. First we will create a adjacent List ^^vector<pair<int,int>> adj[V+1]^^ , take input form user 
		  2. Secondly create a priority queue ( min heap ) ^^priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq^^ , Declare a distance vector of size V+1
		  3. Mark the dist of the source as 0 and push the node in the queue 
		  4. Do a while loop till the queue is empty and take out the top node and distance from the queue and make and iterator and iterate over all the adjacent node of the poped node from the queue , RELAX 
		  5.  Done After that you can print the distance array which will give the minimum distance from the source to the particular node .
		- Code : 
		  ```
		    int source = 1;
		    priority_queue<pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
		    // Above is the impolementation for priority_queue in djiktra algo 
		    vector<int> distTo(V+1,INT_MAX);
		    distTo[source] = 0;
		    pq.push(make_pair(0,source)); // storing the distance and source node int the pq 
		    while(!pq.empty()){
		      int dist = pq.top().first;
		      int prev = pq.top().second;
		      pq.pop();
		      vector<pair<int,int>> ::iterator it;
		      for( it = adj[prev].begin() ; it!=adj[prev].end() ; it++){ // traversing the graph
		        int next = it->first; // see the adjacent matrix 
		        int nextDist = it->second; // see the adjacent matrix 
		        // Relax 
		        if(distTo[next] > distTo[prev] + nextDist){
		          distTo[next] = distTo[prev] + nextDist;
		          pq.push(make_pair(distTo[next],next)); 
		        }
		      }
		    }
		     cout<< "The distance from the source are \n";
		      for(int i = 1 ; i<= V ; i++){
		        cout<<distTo[i]<<" ";
		      }
		    cout<<"\n";
		  
		  ```
- #### Bridges in Graph
	- Those edges in graph are called bridges on whose removal the graph is broken into two or more components .
	-
- [[DFS]]
- [[BFS]]
- [[Disjoint Set]]
-