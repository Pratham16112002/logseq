- **Union** : this method will perform the union of two nodes.
	- if this method returns __false__ then
		- The provided nodes are already connected.
	- __else__
		- The nodes will be connected.
- __find__ : this method will be used to find the parent of a set.
- Ways to implement Disjoint Set
	- __By Size__
	  collapsed:: true
		- ```
		  class DSU {
		  public:
		    vector<int> parent;
		    vector<int> size;
		    DSU(int n) {
		      parent.resize(n + 1);
		      size.resize(n + 1, 0);
		      for (int i = 1; i <= n; i++) {
		        parent[i] = i;
		      }
		    }
		    int find(int e) {
		      if (e == parent[e])
		        return e;
		      return parent[e] = find(parent[e]);
		    }
		    bool union_n(int a, int b) {
		      int a_ = find(a);
		      int b_ = find(b);
		      if (parent[a_] == parent[b_]) {
		        return false;
		      }
		      if (size[a_] > size[b_]) {
		        parent[b_] = a_;
		        size[a_] += size[b_];
		      } else {
		        parent[a_] = b_;
		        size[b_] += size[a_];
		      }
		      return true;
		    }
		  };
		  ```
		- [[DSU_1]]