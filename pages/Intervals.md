public:: true

- In these problems we have to deal with intervals [start,end].
- ### Merge Intervals
	- To merge a given the list of intervals should be sorted with respect to start.
	- We need to compare adjacent intervals.
		- #### Overlap
			- Then replace the end of the previous intervals with `max(previousEnd,newEnd)`
		- #### No overlap
			- Then add the interval as is.
- ### Minimum removal to make the intervals non-overlapping
	- First we need to sort the given intervals.
	- Go on comparing the intervals in an adjacent way.
	- We we encounter an overlap then always remove the interval having