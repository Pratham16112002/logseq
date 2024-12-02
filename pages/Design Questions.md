### LRU Cache
	- A data structure which is design to mimic the Least recently used bits.
	- __LRU Cache()__  is used initialize the Cache with certain capcity.
	- __int get(key int)__ is used to return the value for a particular key or -1 if it doesn't exist.
	- __void put(key int , value int)__ update the value of the `key` if the `key` exists. Otherwise, add the `key-value` pair to the cache. If the number of keys exceeds the `capacity` from this operation, **evict** the least recently used key.
	- `Constraint` the get and put method just have an constant time complexity.
	- The node to the `head->next` represents the most recently used and similarly the node just be
	- __GET METHOD__ :
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
		- ```
		   void put(int key, int value) {
		          if(mp.find(key) != mp.end()){
		              node* existing_node = mp[key];
		              mp.erase(key);
		              deletenode(existing_node);
		          }
		          if(mp.size() == cap){
		              mp.erase(tail->prev->key);
		              deletenode(tail->prev);
		          }
		          addnode(new node(key,value));
		          mp[key] =   head->next;
		      }
		  ```
	-