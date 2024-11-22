- #### Shannon vision for digital communication system
	- The conversion of output of discrete memory less source into sequence binary symbols or binary code word is called **source Coding or Source Encoding .**
	- The device used in this process is called **Source Encoder**
	- Purpose of source encoding :
		- Reduce Redundancy
		- To reduce Bandwidth
	- #+BEGIN_IMPORTANT
	  If word is less frequent then more bits are allocated ,
	  if word is more frequent then less no of bits are allocated  
	  #+END_IMPORTANT
	- **Terms used in source coding**
		- Length of Code / Codword Length = a_{i}
		- Average Length of Codeword ( L ) = 
		  \begin{equation}
		   \displaystyle\sum_{ i =  1  }^{ n  } \left( { P  }_{ i  }   { a  }_{ i  }   \right)   
		  \end{equation}
		- Efficiency of source Coding : 
		  id:: 63260233-5899-4d21-9330-8971e5b57bb3
		  \begin{equation}
		   \eta   =   \dfrac{ H  }{ L \cdot  lo { g  }_{ 2  }  r  }   
		  \end{equation}
		  Here L is the Average Length of the codeword  and r is bits 
		  For binary r = 2 ( 0 , 1 ) , for ternary r = 3 ( 0 , 1 , 2 ),  Quaternary r = 4 (  0 , 1 , 2 , 3 ).
		- Redundancy : 
		  \begin{equation}
		  1- \eta   
		  \end{equation}
- #### Source Coding Theorm
	- **Shannon fano Theorm**
		- 1. The messages are first written in the order of decreasing porbability
		  2. Then divide the messages set into two most equiprobable subset X and Y . 
		  3. The message of 1st set X is given bit 0 and message in the 2nd Subset is given bit 1 
		  4. The procedure is now applied for each set seprately till end . 
		  5. Finally we get the code word for respective symbol
		- Efficiency 
		  \begin{equation}
		    \eta   =   \dfrac{ H  }{ \bar{H}  }   
		  \end{equation}
		  Here 
		  \begin{equation}
		  \bar{H}=   \displaystyle\sum_{ i =  1  }^{ n  } \left( { p  }_{ i  }   \cdot   { n }_{ i  }   \right)   
		  \end{equation}
	- **Huffman Coding**
		- 1. First we need to arrange the symbol in decreasing order of probability 
		  2.Take last two symbols assign 0 and 1 and move it as high as possible  in descending order.
		  3. Then again take the lower probabilities and assign 0 and 1 and move it  as high as possible in descending order and then repeat the above steps .
		  4. Go in forward direction and take bits in reverse direction . 
		  5. While going backward note the number of 0's and 1's for each probabilities .
		- Variance : 
		  \begin{equation}
		      {  \sigma    }^{ 2  }   =   \displaystyle\sum_{ i =  1  }^{ n  } \left( { p  }_{ i  }   \cdot   { \left( {  \left(  { n  }_{ i  }  -L  \right)    }^{ 2  }   \right) }_{   }   \right)   
		  \end{equation}
		  
		  #+BEGIN_NOTE
		  Variance should be as low as possible . 
		  #+END_NOTE
	-