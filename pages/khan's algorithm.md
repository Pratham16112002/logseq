### Introduction
id:: 6732679d-bfb1-419b-8a40-1e78cd2d770c
	- BFS algorithm which is used for topo-logical sort.
	- __Topological sort__ : linear ordering of vertices in such a way that if there exist an edges u -> v then u should appear before v in that ordering.
	- DAG can have a valid topological sort.
		- which means it can be used to check weather cycle exist or not in a graph.
	- __Indegree__ : No of incoming edges to the node.
	- We need to first find all indegree for each node.
	- Add the nodes with the in degree zero to the ordering ( Because they will obvious be at the start).
	- How we know that when cycle exists ? .
		-
	- ```
	   vector<int> ans;
	          vector<int> adj[numCourses];
	          vector<int> indegree(numCourses,0);
	          for(int i = 0 ; i<p.size() ; i++){
	              adj[p[i][1]].push_back(p[i][0]);
	              indegree[p[i][0]]++;
	          }
	          queue<int> q;
	          for(int i = 0 ; i<indegree.size() ; i++){
	              if(indegree[i] == 0) {
	                  q.push(i);
	                  ans.push_back(i);
	              }
	          }
	          while(!q.empty()){
	              int curr_node = q.front();
	              q.pop();
	              for(auto child : adj[curr_node]){
	                  indegree[child]--;
	                  if(indegree[child] == 0) {
	                      ans.push_back(child);
	                      q.push(child);
	                  }
	              }
	          }
	          if(ans.size() != numCourses) {
	              return {};
	          }
	          else return ans;
	  ```
	- [[Kahn's Algorithm BFS]]