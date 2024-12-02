### LRU Cache
	- A data structure which is design to mimic the Least recently used bits.
	- __LRU Cache()__  is used initialize the Cache with certain capcity.
	- __int get(key int)__ is used to return the value for a particular key or -1 if it doesn't exist.
	- __void put(key int , value int)__ update the value of the `key` if the `key` exists. Otherwise, add the `key-value` pair to the cache. If the number of keys exceeds the `capacity` from this operation, **evict** the least recently used key.
	- `Constraint` the get and put method just have an constant time complexity.
	- The node to the `head->next` represents the most recently used and similarly the node at `rear->prev` represents the least recently used node.
	- __GET METHOD__ :
	  id:: 674deaa4-cecf-44ec-bd9e-c5ab8692fccb
		- ```
		  int get(int key) {
		          if(mp.find(key) != mp.end()){
		              node* nn_node = mp[key];
		              int res = nn_node->val;
		              mp.erase(key);
		              deletenode(nn_node);
		              addnode(nn_node);
		              mp[key] = head->next;
		              return res;
		          }
		          return -1;
		      }
		  ```
	- __PUT METHOD__ :
	  id:: 674deaca-2f8f-405a-87e5-5db3779353cb
		- ```
		   void put(int key, int value) {
		          if(mp.find(key) != mp.end()){
		              node* existing_node = mp[key];
		              mp.erase(key);
		              deletenode(existing_node);
		          } // we need to delete the previous version of that key value pair from data structure.
		          if(mp.size() == cap){
		              mp.erase(tail->prev->key);
		              deletenode(tail->prev);
		          } // In suce case we will delete the least recently used bit from our data structure.
		          addnode(new node(key,value));
		          mp[key] =   head->next; // updating the map references.
		      }
		  ```
	-