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
	- We we encounter an overlap then always remove the interval having lesser end.
- ### Minimum rooms required for overlapping meetings
	- Given some intervals which represents meeting timings.
	- We need to schedule these meetings in different rooms ( conflict meetings should be held in separate meetings ).
	- Think of the start and end timings of the meetings.
	- Count the number of rooms allocated at a particular time.
		- Code
		  ```
		    int start_idx[intervals.size()];
		    int end_idx[intervals.size()];
		    for (int i = 0; i < intervals.size(); i++) {
		      start_idx[i] = intervals[i].start;
		      end_idx[i] = intervals[i].end;
		    }
		    int start_idx_n = sizeof(start_idx) / sizeof(start_idx[0]);
		    sort(start_idx, start_idx + start_idx_n);
		    int end_idx_n = sizeof(end_idx) / sizeof(end_idx[0]);
		    sort(end_idx, end_idx + end_idx_n);
		    int i = 0, j = 0;
		    int count = 0;
		    int maxcount = 0;
		    while (i < intervals.size()) {
		      if (start_idx[i] < end_idx[j]) {
		        i++;
		        count++;
		      } else {
		        j++;
		        count--;
		      }
		      maxcount = max(maxcount, count);
		    }
		    return maxcount;
		  ```
		-