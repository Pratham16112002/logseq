- ## Chaotic M-map
	- This encryption is based on dynamic s-box and saving each encrypted pixels in appropriate place in the cipher image .
	- The successive pixels are stored in the beginning and end of the cipher image.
	- ### S-box generation
		- Let S_{n} be a list consisting [0,1,....,255],
		- S_{b} be an empty list , where n amd m are image dimensions .
			- Steps include : 
			  1. Calculate the value of S_{px} which is the sum of pixels of the plain-image . S_{px} is the secret key . 
			  2. Starting with the initial value 
			  \begin{equation}
			  x+ \dfrac{  { s  }_{ px  }    }{ 3.255.N.M  }   
			  \end{equation}
			  3.
			-