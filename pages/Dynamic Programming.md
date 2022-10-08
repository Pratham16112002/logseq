- Dynamic Programming is mainly an optimization over plain [recursion](https://www.geeksforgeeks.org/recursion/).
  The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later.
  This simple optimization reduces time complexities from exponential to polynomial .
- **Ways to perform Dynamic Programming **
	- Tabulation
		- Bottom Up Dynamic Programming i.e Base case to required answer .
	- Memorization
		- Top Down Dynamic Programming
		- We tends to store the value of sub problems in a map/table
- #+BEGIN_NOTE
  Avoid using global variables while computing 
  #+END_NOTE