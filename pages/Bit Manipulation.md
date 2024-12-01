- Types of shift operators in java
	- #### Signed Left Shift
		- => The left shift operator moves all bits by a given number of bits to the left
		- The Formula for left shift is => A * (2)^Number
	- ### Signed Right Shift
		- => The right shift operator moves all bits by a given number of bits to the right.
		- The Formula for right shift is => A / (2)^Number
	- #+BEGIN_NOTE
	  The Left operand in the operator in the number on which operation is performed and right side   shows how many times shift .
	  #+END_NOTE
	- #+BEGIN_NOTE
	  Bit masking allows us to store multiple values inside one numerical variable . Instead of thinking about this variable as a whole number , we treat its every bit as a  separate value .
	  #+END_NOTE
- ### Major Operations in bit maipulation
	- Get Bit => first we left shift the 1 with position given and then check the and operation of the bitmask with the original number .
		- ![2022_06_13_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f33e9ad76-d8bc-43c8-9bda-e9a09224f7a12022_06_13_image.png?Expires=4808744875&Signature=oLSNEj5Oz9uM4IA4nk6OpcpSVW1hK2FoqU~DUXv9cT57wvX04J7n51W4VvbNThPMwJdZh3FickRfNkdzIvHaxNtQ-1~NMZ-Y6qmW3XrdbK0gog3GFWfbjNNIZ9Nzk9fTxaC0KRS0eR8wuaS182HMyQssC~zU23qf7HrSc7VGA30t8BidS4hH2jkY7h9ABE9-mkFlx4ADRpMWZn5QVCV-u835XqGf3qPz9AAZ~Lg7kGybp4cbJXju5ifgKFk7HufF0KuTUXluMYa9peoKLt0mjfbjAHEV4VZ80Dldlx0znpo84Jm7WiW028HB6gWeS60VS1X6V41XCMno6v~sBpivhA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- Set Bit => first we left shift the 1 with the position given and then perform OR  operation of the bitmask with the original number .
		- ![2022_06_14_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472ff49e0f49-085e-4be2-821c-25bfabd0657f2022_06_14_image.png?Expires=4808745376&Signature=XVnXjxFY3M0bewfJPTX9~Za58CjbN~miLpKjpWndhmyfY~ETLhuCgqcO7d9nPYY2OW-s0F~cFo3MvfVyeDr22KgyvD6aiTVXdamm2fJ7TKuEEac-uaEtxB7QQgJ7T7B5BTK0F1ZL5oDziQpdRVEw9P6yk7o8qK~c0hGFJeAW2ruZIA~0PSVGB6l4bSK9C8spaMuW49itlSeryo0pjt3DK3qJJY28iQQhbQfFpgkFG65Ob4FUSPvFcR7xnifeCSzB~AhZHZAbusBbezh8X1HqnkoMqwhmOgOA3bjeZYwJYqv6mqyeqxapXi4EhBGzdFkpFeu36EWyNbLz2n8ct5KS1w__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		-
	- Clear Bit => first we get the bit mask by left shift with position and then do the not of bit mask and AND Operation with the original number .
		- ![2022_06_14_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f51bd58ad-0dc0-4a12-ba37-2fcce4917a072022_06_14_image.png?Expires=4808745835&Signature=jhNJWjxK1qp7xAlUShlRosJIZphNdkOxJxdoV-l0EVMhewT8sBz1O8rPOXzSt42-L7dGnz3PhgMQCuBUn~w849w3a1VYZ4W-KAZ3uhh3wvURjcNxec2vrOT7fUKFSdmKaaMevHsZG2hrqfacZfhNNOqCMJ4Ff-vYjAxqq5KHrmf8e13A3H0bdfOu0X7YLjPZDe4vPhL92yPQxJsg6Qkf8DWJf4FBVoX2gMFVqRQZgkVE-Xtp6ntkRbNGa-6Q0epnimzca97IUsGfAmxU2j8kOl0aFuwATxXaquXF-61aZYivNpCKBp4KxB8k42yBhkovNaHmGooAxSOEMXIyjwbanQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		-
	- Update Bit => For 0 it is same as the clear bit and For 1 it is same as the set bit ^^above^^
	- #+BEGIN_TIP
	  To calculate the number of bits required to represent the number is 
	  ^^ c=0;
	              while(x>0){
	   // This is for checking how many bits are required for X 
	                  c++;
	                  x/=2;
	   
	              }
	  ^^
	  #+END_TIP
- ### XOR Subsets
	- Take elements from 1 to n.
		- If we do an xor operation on all the values then