- #### Shortest Path
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
	- **Djikstra's algorithm**
		-
- [[DFS]]
- [[BFS]]