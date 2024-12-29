- **To find the last index of characters **
	- Code : 
	  ```
	  vector<int> lastIndex(26,0);
	          for(int i = 0 ; i<s.length() ; i++){
	              lastIndex[s[i]-'a'] = i ;
	          }
	  ```
- **Greedy Problem ( Remove Duplicates from the letter )**
	- Algorithm : 
	  1. First we will store the last index of each alphabet in the string , create a bool vector and a stack of characters . 
	  2. We will do a for loop to iterate over the string and then make a current index variable . 
	  3. Inside the for loop we will check 3 conditions , firstly we will check weather the stack is empty or not , secondly  the current character in the string is less then stack top and the current index is less then the last index of the character at the top of the stack . 
	  4. If all the conditions are satisfied then we will remove the char from the stack and mark false at the respective index of bool vector , otherwise we will just push the char into the stack and mark true in the bool vector . 
	  5. Simply empty the stack and return the string in reverse order .
	- Code : 
	  ```
	  string removeDuplicateLetters(string s) {
	          vector<int> lastIndex(26,0);
	          for(int i = 0 ; i<s.length() ; i++){
	              lastIndex[s[i]-'a'] = i ;
	          }
	          vector<bool> seen(26,false);
	          stack<char> st;
	          
	          for(int i = 0  ;i< s.size() ; i++){
	              int curr = s[i] - 'a';
	              if(seen[curr]){
	                  continue;
	              }
	              while(st.size() > 0 && s[i] < st.top() && i< lastIndex[st.top() - 'a']){
	                  seen[st.top() - 'a'] = false;
	                  st.pop();
	              }
	              st.push(s[i]);
	              seen[curr] = true;
	          }
	          
	          string ans = "";
	          while(!st.empty()){
	              ans+=st.top();
	              st.pop();
	          }
	          reverse(ans.begin() , ans.end());
	          return ans;
	          
	      }
	  ```
- #+BEGIN_IMPORTANT
  **soi(string)** 
  The above method convert a string to integer 
  #+END_IMPORTANT
- **To convert string to char array**
	- First declare an array of type char .
	- ```
	  strcpy(char_array_name,string.c_str());
	  ```
	- Remember if we are dealing with the character array make sure you do operation using the ascii table values .
-