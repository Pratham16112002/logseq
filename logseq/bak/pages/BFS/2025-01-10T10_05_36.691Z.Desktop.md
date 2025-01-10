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
- [[Khan's Algorithm]]