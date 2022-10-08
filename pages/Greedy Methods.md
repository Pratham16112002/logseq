- #### Greedy Method
	- This method is used to solve optimization problems
	  Problems wihch requires either minimum or maximum result are called optimization problems .
	- **Knapsack Problem :**
		- We should select the objects which have the highest profit by weight ratio .
		- Sort the profit to weight ratio array and put them into the bag one by one .
		- Constraint : 
		  \begin{equation}
		   \displaystyle\sum_{   }^{   } \left( { x  }_{ i  }   \cdot   { w  }_{ i  }   \right)   <   =  m 
		  \end{equation}
		- Objective : 
		  \begin{equation}
		  max \displaystyle\sum_{   }^{   } \left( { x  }_{ i  }   \cdot   { p  }_{ i  }   \right)   
		  \end{equation}
		- Approach : 
		   for i = 1 to n 
		  calculate profit/weight 
		  Sort objects in decreasing order of P/W ratio 
		  for i = 1 to n 
		   if ( M > 0 and W_i{i} <= M )
		           M = M - W_{i}
		           P = P + P_{i}
		    else break 
		     if( M > 0 )
		            P = P + P_{i}(M/W_{i})
		- ^^Time Complexity : O(nlogn)^^
	- **Job Sequencing with deadlines**
		- You are working on uniprocessor
		- No premption , Every job will take 1 unit of time
		- Approach : 
		  1. Arrange all jobs in decreasing order of profit 
		  2. For each job(m_{i}) , do linear search to find particular slot in array of size ( n  ) , where n = maximum deadline , m = total jobs
		- ^^Time Complexity : O(n^{2})^^
	- **Optimal Mege Pattern**
		- Algorithm : 
		  Create a min heap with n files 
		  At each level remove two minimum 'a' and 'b' from min heap and put a+b again into heap .
		- Time Complexity = O(nlogn)
	- **Kruskals Algorithm Implementation**
		- Algorithm :