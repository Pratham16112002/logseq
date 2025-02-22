- It is a traversal technique , 
  A boolean visited array is used to mark the visited vertices. For 
  simplicity, it is assumed that all vertices are reachable from the 
  starting vertex. BFS uses a [**queue data structure**](https://www.geeksforgeeks.org/queue-data-structure/) for traversal.
  #+BEGIN_NOTE
  Traversing the adjacent node first , after that you move to the next nodes . 
  #+END_NOTE
- Graphs Input in C++
	-
- Follow the below method to implement BFS traversal
	- Declare a queue and insert the starting vertex.
	- Initialize a visited array and mark the starting vertex as visited.
	- Follow the below process till the queue becomes empty:
	- Remove the first vertex of the queue.
	- Mark that vertex as visited.
	- Insert all the unvisited neighbours of the vertex into the queue.
- ```
   vector<int> bfsOfGraph(int V, vector<int> adj[]) { // adj[] is the vector which tell ous all the adjacent nodes
          vector<int> bfs; // final answer we are going to return 
          vector<int> vis(V+1,0); // Visited array 
          for(int i = 1 ; i<=V ; i++){
              if(!vis[i]){ // checking that the node is visited or not 
                  queue<int> q;
                  q.push(i);
                  vis[i] = 1;
                  while(!q.empty()){
                      int node = q.front();
                      q.pop();
                      bfs.push_back(node);
                      for(auto it : adj[node]){
                          if(!vis[it]){ // If the adjacent node is not visited then
                              q.push(it); // we are going to put it into our queue and mark it as visisted .
                              vis[it] = 1;
                          }
                      }
                  }
              }
          }
          return bfs;
      }
  ```
- ## Cheapest flight within K stops
	- There are `n` cities connected by some number of flights. You are given an array `flights` where `flights[i] = [fromi, toi, pricei]` indicates that there is a flight from city `fromi` to city `toi` with cost `pricei`.
	- You are also given three integers `src`, `dst`, and `k`, return **the cheapest price** from `src`* to *`dst`* with at most *`k`* stops. *If there is no such route, return* *`-1`.
	- _Initial thinking_
		- The initial thinking came to my mind was Dijkstra algorithm but it was not worth it.
	- _Actual approach_
		- Modified BFS
			- ```
			  int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst,
			                        int k) {
			    int nodes = n;
			    vector<pair<int, int>> adj[n];
			    for (auto it : flights) {
			      adj[it[0]].push_back({it[1], it[2]});
			    }
			    vector<int> distn(n, 1e9);
			    queue<pair<int, int>> pq;
			    pq.push({0, src});
			    distn[src] = 0;
			    int stops = 0;
			    while (!pq.empty() && stops <= k) {
			      int size = pq.size();
			      while (size--) {
			        auto [dist, node] = pq.front();
			        pq.pop();
			        for (auto it : adj[node]) {
			          if (distn[it.first] > dist + it.second) {
			            distn[it.first] = dist + it.second;
			            pq.push({distn[it.first], it.first});
			          }
			        }
			      }
			      stops++;
			    }
			    return distn[dst] == 1e9 ? -1 : distn[dst];
			  }
			  ```
- [[Khan's Algorithm]]