### LRU Cache
	- A data structure which is design to mimic the Least recently used bits.
	- __LRU Cache()__  is used initialize the Cache with certain capcity.
	- __int get(key int)__ is used to return the value for a particular key or -1 if it doesn't exist.
	- __void put(key int , value int)__ update the value of the `key` if the `key` exists. Otherwise, add the `key-value` pair to the cache. If the number of keys exceeds the `capacity` from this operation, **evict** the least recently used key.
	- `Constraint` the get and put method just have an constant time complexity.
	-