- #### Valid Sudoku
	- **Approach** : We will be solving the problem using set in c++ , 
	  basically we will make three sets one for row and one for column and one for Subbox of size 3 ,
	- Then we will run nested loop from  0 to 9 and check if the char is found ( already present ) in any of the three sets : In case an match is found then we will return false , otherwise we will continue and insert the char into all our Data structures
	- #+BEGIN_TIP
	  In java there is no need to take 3 separate data structures we can use only one data structure and compete the result .
	  #+END_TIP
	- Code :
	  ```
	   bool isValidSudoku(vector<vector<char>>& board) {
	  		
	          unordered_set<char> row_visited[9];
	          unordered_set<char> col_visited[9];
	          unordered_set<char> subGrid_visited[3][3];
	          
	          for(int i=0;i<9;i++)
	          {
	              for(int j=0;j<9;j++)
	              {
	                 char char_found = board[i][j];
	  			   
	  			   // if pos is blank then no issues, we had to check when it's not blank.
	                  if(char_found != '.') 
	                  {                     
	                      if(row_visited[i].count(char_found) || col_visited[j].count(char_found) || subGrid_visited[i/3][j/3].count(char_found))
	                          return false;
	                  }
	                  
	  				col_visited[j].insert(char_found);
	  				row_visited[i].insert(char_found);
	  				subGrid_visited[i / 3][j / 3].insert(char_found);
	                  
	              }
	          }
	  	 return true;
	      }
	  ```
	-