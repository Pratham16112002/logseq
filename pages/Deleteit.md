- ```
  Maximum_sum_rectangle(M,row,col):
  	sum -> 0 
      max_sum = INT_MIN
      for(c_s : 0 to col):
      	sum -> 0 
         	for(c_e : c_s to col):
          	for ( r : 0 to row) :
              	sum += M[r][e_e]
              curr_sol_sum = kadane_algo(sum)
              max_sum = max(max_sum,curr_sol_sum)
              
      return max_sum 
      
  Kadane_algo(arr):
  	max_sum = arr[0]
      curr_sum = 0;
      n = arr(size)
      for( i : 0 to n ):
      	curr_sum+=arr[i]
          max_sum = max(max_sum , curr_sum)
          if(curr_sum <= 0):
          	curr_sum = 0
       return max_sum 
  ```