### Maximum Path sum
id:: 674dfaf6-6815-491f-bd25-152b39e835c9
	- In a binary tree a path is an line of sequentially connected node from one adjacent node to another.
	- A single node is also a path.
	- We need to return the maximum path sum from any given tree.
	- `Initial thought` : DFS.
		- DFS function call.
		- ```
		  int getMax(TreeNode* root){
		          if(root == nullptr) return 0;
		          int left = getMax(root->left);
		          int right = getMax(root->right);
		          return max(0,root->val + max(left,right));
		      }
		  ```
		- ```
		  void help(TreeNode* root) {
		          if(root == nullptr) return ;
		          int left_max = getMax(root->left); 
		          int right_max = getMax(root->right);
		          maxi = max(root->val + left_max + right_max,maxi);
		  
		          help(root->left);
		          help(root->right);
		          return ;
		      }
		  ```
	- Time complexity `O(n^2)`.
	- {{embed ((bbf7ce40-b159-11ef-8194-33c1903a9cb7))}}
- ## Construct Binary Tree from In-order and pre-order traversal
	- In-Order traversal
		- {{embed ((674dfafa-241d-4da6-a6a0-3d3d0b6c0e7b))}}
	- Pre-Order traversal
		- {{embed ((674dfafa-84b7-4bbc-8d61-01e03ee71298))}}
	- These two traversal are given we need to construct a full binary tree using them.
	- __Initial thinking__ :
		- Pre order gives us the root of the tree.
		- In-order traversal give us the left and right child's of a particular node.
	- The pre-order has the correct order for the root nodes in the tree.
	- We can you a index to keep index of root nodes in the pre-order given to us.
	- For each root we need to linear search the in-order which would increase the time complexity
		- To solve this issue we could use some space to map index to the element of in-order traversal.
		- Best way is to use hash map.
		- ```
		  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		          
		          for(int i = 0 ; i<inorder.size() ; i++){
		              indicies[inorder[i]] = i;
		          }
		          return help(0,inorder.size() -1  , preorder);
		      }
		  ```
	- ```
	  	int pre_or_idx = 0;
	      unordered_map<int,int> indicies;
	     TreeNode* help(int l , int r  , vector<int> &preorder){
	          if(l > r) return nullptr;
	          int n_root_val = preorder[pre_or_idx++];
	          TreeNode* n_root = new TreeNode(n_root_val); 
	          int mid = indicies[n_root_val];
	          n_root->left = help(l,mid-1,preorder);
	          n_root->right = help(mid + 1 , r ,preorder);
	          return n_root;
	      }
	  ```