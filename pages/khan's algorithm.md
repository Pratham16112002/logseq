### Introduction
id:: 6732679d-bfb1-419b-8a40-1e78cd2d770c
	- BFS algorithm which is used for topo-logical sort.
	- __Topological sort__ : linear ordering of vertices in such a way that if there exist an edges u -> v then u should appear before v in that ordering.
	- DAG can have a valid topological sort.
		- which means it can be used to check weather cycle exist or not in a graph.
	- __Indegree__ : No of incoming edges to the node.
	- We need to first find all indegree for each node.
	- Add the nodes with the in degree zero to the ordering ( Because they will obvious be at the start).
	- How we know that when cycle exists ?
		- queue becomes empty but still some of the nodes have a in-degree
	- [[Kahn's Algorithm BFS]]