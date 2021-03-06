- ## Space and Time Complexity
	- Relation between Input Size and running time ( Operations )
		- Time complexity \uarr as the input size \uarr
	- ### Three Cases of Time complexity
		- Best Case \rarr the function which performs the minimum number of steps on input data of n elements \omega
		- Worst Case \rarr the function which performs the maximum number of steps on input data of size n. \theta
		- Average Case \rarr the function which performs an average number of steps on input data of n elements . O(n)
		- We will always choose the worst case time complexity for checking any runtime of the code
			- Below code ![2022_06_11_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472ff7a66e49-ab6d-404d-904f-b8f9de4605372022_06_11_image.png?Expires=4808567372&Signature=KMHeaNHuF8iAPWWfg1hU7sA1QpBv350pJL4g0Fk0yXuehCa4ErVLsaJAM9PAc7ZYFc1gHnZ43Bar3RBHAIqK5PreItL5cYhh0HerU98sj9XQVTOhpLKqcvxolSNC2CX-T9dPhxoQ4DZ21ED69Z3MsdC49vimfw-uP~zk7rd6uzX14wLhrCKNQdc4ZfFICg--zc9-GHFYTbaV1W9bt-ZctSv8a6LSjvTuRYs-Y0yljPnGaN2TA56QBOCOUpPzMxxA8wW4Va2Rejp1nP74gHfOcEe23RpQBzsJkdXXcsJtai2m9PgnO72CsaD21yzf4bG39NOjYrQuV8Smyc0p7E4-5g__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				- In the above case the time complexity for the run time is O()n * m) in worst case .
				- In the above case if the for loops for not nested then the complexity would be O ( n+m )
		- ### Space Complexity
			- It is the amount of memory space required to solve an instance of the computational problem as a function of characteristics of the input .
- ## Arrays
	- list of items of same data types
		- Syntax for array in java ![2022_06_11_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fda705581-f2f5-4a19-a819-1bf7dc5a992c2022_06_11_image.png?Expires=4808568037&Signature=jFoqcx-xfbx2X3sXsGxVF4TKoxUiWNuMh2YDlD1IBr~8372jybslFf1IasfksVV7vagGp74JHtAss2B~8Y5-~adGtK3Cak4qDhdBkWhTfv5RiMeInUsD723tsMnXpCSWzY3yuSc3~U82lflysliCg51IPJ3NPdmH1COV5y9InBCLYNdUwiKeM5iebdf6loSEOS638k-J0R0dofUgFkbhk1GgthOzOEO5JwKo8UEbjRvocf0qmhHXtKEEyD8dkoF0d2NwllHPkFiZXWEkovgOybwk5EvfVDsQ1axg-xyGIyGE8PRqORDCXgiiIkZi7VQ1KdhH2e0HCtCv2fEKCFhAoQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		- Defining array part 2 ![2022_06_11_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fdc2aa855-0b53-4198-932a-cfa019c0d6b32022_06_11_image.png?Expires=4808568555&Signature=ZJwJljG2UAe9kt9~SG-brL3CNmZQVKk7YWAa2lVfv-z3YcdZGwrFoeCRKnBhMuPyB-K66w1hg6ogAcftJ5zHWfimQ2sLh6iixL7HmWrr87RnoYfCZuAqm6lDftBaF4YrPKv~FPuifZUeqg0ISFIX~1b-h0bjuExG2duocJE455FWgT0Tu-PJ7qfRnMxWOsXvoTbxOSS~-v~s-5aZT3wT~BFvTtVPcEVmg~bs0xG0GNMO21mTHnviPh8G7I73W8nQrPp5D~t0Ka2tk4pcvmJb2BT4sUC5liuRlxLSpRuPeOpFbo0rhjIZxSPOjJG0ULa4J~pgjCkkCD53pdtUznX8DQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- #+BEGIN_NOTE
			  In java by default zero in initial value of array elements . 
			  #+END_NOTE
			-
			-
		- ### SubArray
			- Brute Force -> Do nested for loop and check Each and every sub array
			- ![2022_06_24_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f75550f70-8f7c-4994-90d4-4ce5ab6173392022_06_24_image.png?Expires=4809693215&Signature=ikv0TmbC2re-qOqHAXJ6qdiWVkwGkx2FJxz9~~OeeUQKE~Gcbhr4gm7shDCijF3UmiMmKFP8VWQx81s2Kc~R6QG8msEFtIHbGPSc-9ksumgG-glVZzTPPWKLgjG671n47wrh7uslLXTbDpWNCltWLY---YAqKP0JI6R4fF6e1oDHT4l7RgAtjtEJvEnjiuw60zQW9YsPcpWvcRJfTjYF9cCTgZsJApzYi8kPKIp8UPVQAzFjw4lvBSabouHJ6Swt21Ty6HRuQVcxiNY9K-yT0xicCpWRe2~7-DtbWnFzE8GvFKHVrIQml60E2sS3pkKUPjbjcVLsD3fW3wih4Pz55Q__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- #### Left rotation of an array using vectors in c++
			- Given an array[] of integers and another integer k , the task is to perform k left rotation on the array and print the modified array
			- D == k
			- ![2022_07_02_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f7b1269d1-9993-4574-b77a-f646da8cba552022_07_02_image.png?Expires=4810339485&Signature=SL2thOLvyAfvMI8abOjF-HOrrlZbgKND3qWZbVFm92emp~U16irY0H-sPoDLzNCeh8NSkpg1qVLqHUAj9UnBTVDTVpasBW6Nug0pJEyLMn6~Zgby8HDMoT3qWblIY3hai4KgQKc-p2sOzOWabRnG0jeKmbOVTXLytzpYwMceXl4JEOTu6KowQEGhsnbNqsDPZELsbecvxQW5bxBY9vUiCch4GrvP1Snu5JvkcF~qZNrAqoLo1hMqLv8GiTTV6-8n0vlZ1b17vn2vrQBRWRkRiCMwzK8eTp4WYG4wX96ssjxi~l9uwMLHxZFGY8JcA2fYb4TErmLzdVPZMnJ2WZjITw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA){:height 160, :width 686}
			- ![2022_07_02_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f781434f9-19b1-4c60-aa9e-d5f6f3a3c3082022_07_02_image.png?Expires=4810339514&Signature=DqBFL8~knRoMq8CoLRNkHR2MLqbVbMjcCxBflukJVS7yFxyC4IwPaQ7YBw7BzWfw3~qwOeMkLqEZyM9P2rFMyQvsYSLY6LpE3qdhThMZ04qRaNFVG8HfkqSZI6ko3eXmhGPzT7kMi4q1n1SaxRNbZsdd2GIpArELrm8m7o6Kflub4KBmjoGBuxWKbGdU9YNsQ~cpS~KM2xq-UNy9br0qWbDiXXIv1Cb0xziMW1jfuDm8FcZsMUEkvyK8bW7HePhgaxnu5uBzLQRPsFrGT4w~M4Zx9qc9Juor~1VU7g~tTxvhZ25je2O-sLHoFB26DY3NjliVhNiGu5t16wAnxnAFog__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		- #### Right rotation of array using vectors
			-
	- ## Sorting
		- ### Bubble Sort
			- It runs a loop for n-1 times , it works by repeatedly swapping the adjacent elements if they are in wrong order .
			- This is not suited for large data sets as it average and worst case complexity is quite high . ![2022_06_12_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f53bc4d80-2fb5-4b3b-a1cc-0bf5e2ad6f782022_06_12_image.png?Expires=4808622330&Signature=ZRwfbY4JDGw-QhgVZKujIgDBXaPFgLXOA2a8bxG8E5Ye7uxy1D3OjUc88iLOclWjaDWUrtSMGPpt2UKG2uO50xSbUcgW-7VA2~QG3OSn8FUCGggcFOLuVMhJ3Ep78vmItDZ7yTYdFgQiFpwdrIOjBL-z-B3kN~T1-8KErPdsV32CDOS35kR9oL2Sagtw8TKQMK9JNas5~B35fs6UbBLqBaKDSakIE44LYtjSaIXMZ0UjeRWKlG74D~DVN6l23w8XbvXWsoLPyTkoIhfQWMuVfKLBY3f2~doI4GmiV-oWZXS9bY5waLQc-fx5cZsbYKe2eyg-Gk7XhOeBW5FODKI6ow__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Time complexity \rarr (O(n^2))
			- ![2022_06_12_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f3f171e7d-3d49-4636-a5ae-11b313ac939c2022_06_12_image.png?Expires=4808624966&Signature=ACnWRW06g8F~MOSboxZbOhlCYkESz-fm7~HTw98GnvV1YJdvqrGQ71gCGWiu0GrPBvf1AflgzTmSPh9yA6UsLcrqy6OHc1-9e~ObWbr5sVdNVNQdaj5GAqZ46EPSfJBGsg7aHdPG2Z6k5gc254SaY-751VGduUlsaKuqv5bnDOoxKDTu~dezPBcTV3qP-6VXhDWYIUkAZ5NeJ6hH80Kj~VIc0a0rZbeYxpGaJ0yPbPH5IVq8bIbt7kD3OYCpofVqH1ziflpPOt1qor8-TLUgsWw9KcJPGHkflw6jYFdd1jc5U-sZX2Gh~ifHmdy277F91XxdycwB3wf1GWCq1WNfPg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- ### Selection Sort
			- it sorts the array  by repeatedly finding the minimum element from unsorted part and putting it at the beginning .
			- This algo maintain two arrays sorted and unsorted array .
			- In each iteration only one swap is their
			- Time complexity \rarr (O(n^2))
			- ![2022_06_12_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f0319feb5-d71a-45fb-8dea-1c0f4e97b5d02022_06_12_image.png?Expires=4808626901&Signature=Epf~2EAgB3XKbtFzm4lFreRkgShXQB2PNfo7mI2uRM03DZCGd91L-OlU5wV2U7QavxLULy96-pPIunAQTIiRdKMIe1xjL-xo3E0AMTrHPIXkpRni8bhGCOA4GdXFy7Lr2W01H-N52vNweSKQAdmLmU9U-~IBe4fzd~k~zahXc0qw9wvwat0vA3kZHifvm1cLEbbMMlqZR2eWAYmlwvhBuDS12Q~xAg6T27ZESojI51ca4ABFz-VLD3Q1vvprFhvzQZikz0ZvVSd7WYh2h8prYfsbGg2xPljeg1hGA7tgQ8jH~Lf4tpewkwxkK-qHshwpgPhqu-XyBGqYvTSsIIp9sA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- ### Insertion Sort
			- Slowly the sorted array increases and the unsorted array decreases .
			- It places an unsorted element at its suitable place in each iteration by shifting the required elements .
			- Best Case \rarr (O(n))
			- Worst Case \rarr (O(n^2))
			- It is also called online algortihm \rarr because it does not need to know anything what values it will sort and the information is requested wile the algorithm is running .
			- ![2022_06_12_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fe5c8ddfe-4793-4c5f-8a02-e3a5ff89af3a2022_06_12_image.png?Expires=4808628582&Signature=fJklpgA3MFW-MiWBNAMKRHq4CLYg8R0Je5pONaIuc5Wu3XNeQvGUlPiRC0jLsDURovDu7RH5Hop4taVO30f~Qg45iJN3w9J0DxxwAxqUwFxBPEFGvyFfwVcjRT48wvNFtPnWDpbeelhY~263oWW0CipSsWPqBkFpMOKhYsdHpWvzV6Dkq0kz4--aayY4e71-egbZEC~BPAqfOh6DR5MCw98PABu~M7GKYUDZb7o17VNPZ-~uLwgM3Dmyx2LfY6cSkkQV1naWcaDHH8cdKm8yH0jAlslVwUcBYQgEcGuxMpUPN-XuvcR2UFEd-6Agy~12k9fNipRrZ6a-UeJsjW4v8w__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		- Print Sub array of and array ( Brute Force Method )
			- ![2022_06_19_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fac56a940-6848-4528-9a8f-3f56bb2441eb2022_06_19_image.png?Expires=4809216832&Signature=QI4ovVxtLy~eU2pIO2Rw8siTSiARnlByL1PBuA3wj5rKUgCa06A5vSzzmX3veWYgvn4ZRf6AUWnrUToXKAReHEfGwoU5I2zzPwTUvJCdKuB7mPIHg-2c4ET2ZJf4m9NxpcFVEjE6autWLM~vOF5y3S~heXd3jVLb4eF-H9rAfK3njmTiEwhCZAuZiczpSgl6n9poLmA6LT0EfN-fBj7R75Y5fmX0OfOsyS1TlcjMdMNfulhOFoDtCLvDeNc2qqGtXBDJ0ldvi~3yH04UmE-qxvQLddSgo5NliRHT38thdnpASzsP4qjQYOb1Dih-FQUvwhcv89gcbNzaEk9aoRdRkg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			  id:: 62aeb4f8-f56a-45f4-b9fa-307667048beb
		-
- ## Bit Manipulation
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
		-
	- ## Recursion
		- There are 3 steps to solve a problem using recursion
			- #### Base Case
				- Think of the simplest possible input for this function .
			- ### Find the relation
				- Think how the larger problem can be solved with the help of the solution of smaller problems
			- ### Generalise
				- Make a generalised function that solves the problem . Put this all together into a Mathematical function or a tree .
		- Q. Print the sum of n natural Numbers ?
			- ![2022_06_14_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f6ba37626-410b-4e24-822f-3e7a56484ba52022_06_14_image.png?Expires=4808752813&Signature=iqHSAkSUpKyNt0E7lbIIjlowdW0hNzpXxTPR~3rFvC3wjkTZykV29GTAgFPiC4-ALohHDgIBabg5fY2FUwt5ATkDF1s6R8Mhs8DoDuZhRuALiof8DMFKl0kJwSGd1r0F6vc74jF-s2qji6BtZuC2GQvFCDHq95L9Y-p2DKlRe3t~2bc~wouWhgDhH4ooarcg4Z9WnxbY0pkLfLs7Au5r0VFGiQel60PEbUQm-n-15KgB2NRNKiaLk27nCMAO4DHKlOrTbs0mSWcwObkJXmdTDF5Gxo0CMzNjD5k4s8pJZfsSWd5gz~xXjTzXGwoG5rg1AOgYe5G8J5wQEO6-BWPreg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			  id:: 62a79f30-45ab-4e02-b49a-8cdbb39345be
			-
			- Calculate Power ( Stack height \rarr n ) ![2022_06_15_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fb9a65df9-b89d-4d20-bc9e-c90e961afc0b2022_06_15_image.png?Expires=4808832971&Signature=cVFFY9tDglSayXuqUFp7y5mMzqOhKyMfoUJO4YFhiJvPCTMNhOUxOPBmUrZvzfdfTSjEKz6colOmdsK38ZKSKpPaNxwocMgyJG8s0yeR0l45nJ8GCeOIm-rInwxrBFENEVKQnsAlwm9qRjorlXwmM3UA1cgpwTzb~qSSqKt7SjzMElHJ3eQ12g-FemKaPVQbK5dW2rAmImcmtt5zJvc-iK~Kt6zKuCkrT8FvBVLLZmWDv8q8jH7KcZB8DBx5IbdA9PFhfUgEHwyGzQzo5uyf559RNQ9iXG156TVT7IkjdtGR4t-HeQO5-flge4rbMWq9SJGgKYIP0CCrGNGh0vDqCw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA){:height 243, :width 453}
			- Calculate Power ( Stack height -> logn)
				- ![2022_06_15_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f63723146-afdf-45e9-a29c-59b4b8aba3622022_06_15_image.png?Expires=4808833406&Signature=RJxhsX8gmL0i1sSYKtS8or5jb4Ck8Dln9dVcXa0o8W1fSDleyOkeBgoeQdOsxjoWxFlvbEfgxJVV2PevRMfxoIlv1pKboaFmvQqvpUHwVnqlOZtvKxGXt7Q~UJFdSM4tvmJppCOslHAKlWBSqUhQaORAv5zXZrUc7kuLPTa3cNKFdpZcb~DXZqQWO~ZZz79UAQhOR4aZMoCZN6PnG2j7v0kWmEAmA5~JeoS2G7QtisU2EIllcS6Tv7KE0mbuHIO~au2XlFKtnrMJ296pO~k1na~WHmwFnRMjRZJ2P0iFeDhyF9T2bUo9veuXfb255ZigOxbqUu9X6vumjoMJycjkSg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				- ![2022_06_15_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f221faa32-bb48-4ec9-89a3-2e94074ffe342022_06_15_image.png?Expires=4808833864&Signature=I9oTqVXuqzZbb8SHXt~ZD3W7J1ysrLca~Y2wfDYcIM-CzBb-dXVU8NVPHW~PiO8lTN~mH6n4nULePgPyQKT9p3uovYIlxLloxSp8Svg1-FcUfbZOhrOiPbBJOduvHsVZFL2DitokkrUJ8Le9KhnGeqHl6PnSWl7oqMbiahKJevDMEwxu8HdhO3c2OkYak63Ux~tCFvz2O8tq74vD6q14trUKAslEQW3fTA7PxelHmqzZRVCzzfTKGD7RtWpV6Q64F5UsqgMnCXl~2GX4SvbzO9M4LaI1RmOpFZ-JyqAhdOa~8fxFsuyb~a~E4NddWN1eAyuib9yEOq3q9pn6DbVVBA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				-
			- ### Tower of Hanoi
				- Tower which is empty that we can assume ^^Helper^^ , From where you want to transfer the disk that we can set as ^^Source^^ , Where you want to send the disk can be set as ^^Destination^^.
				- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f8af71b22-f364-48ff-b185-1f8e1b3a49262022_06_16_image.png?Expires=4808957083&Signature=EAbs5Xp---XENSd2L4TWVDB4JehCG9E6oZNHkpffblvpL2lR-YwJ00TJON51rw12DfExMspziigDd40Wcx7hg6ByIoUF-FhnY7bbXNbLn2KeWqyIZnqLk~pL83Q9Tv8u1ntK4gf7JwFDzJNEZdwAOAObJI5cBWZC~8rxpfpROkMnW4rd7pekmV48ckogDhTsKQTEjH6sPhzPgcz8ULyQlNKr0zZ196Bc6LXwl44uSBAMG9Xm1B2p~HfWcdpA730clKKRmugnQ0GkzwI6eapogQgBr3Jvb6y70q1X~SAwFuyG9i0pmbFFptNVZj--R4EaGOFZA5Gan6pUkrwTwbwtCA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				- The Output for n = 3 is ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fd3303f72-910f-453e-b33b-8d5c3b0c57222022_06_16_image.png?Expires=4808957125&Signature=m1RoX5TsH8KGAkcwoGIcFBu2ZuU2G1b1VNIeeClvm7zelyUs0FvQQyCKUzk8qPh~kr1j9mRp8AjqVpp9fR052k7Rc2IyXABlzf8mAf1dZHzZ5b8szgmOGgu6erRs~SK-dHdMrq~TGnm41VEoX74mhLUuGmEdl1-~O9DrUk86QRXN13wD9SxrDf8zoWXeQdRrwg2hVu6xHOLntLLiQB~zeho9QCKzbw4D49OFiJZE0bLP9bPxKE9sXZRN3hoOiImAuwEcC5lCV2wXD8OLQlhDwolbbFPYhaxBSImnts2IXUWs7buypIiI07XEjEOMGqKCzWTL6~PUhnXZLgDA3r-XfQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				-
				- Time complexity -> O(2^n)
				-
			- Print a String in reverse
				- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f19f0378c-67a0-436c-b31a-f7a6e5f505952022_06_16_image.png?Expires=4808959770&Signature=kuVsdPDk1jFRfm9qm5VGbYHwRNdrfNZJt5flCVTyTSBdf0Ev8MTe8X0JuOQJgW05MqaSqO0va6EwPDrskpxNOW6Wu9sxIXXAx~dFhZQI5wPPUBomBPUsM8jpZqodcmlnfaynxMhacvhHaJpzvrOmfLOAPrBroAxPbWGZDjBGFo84QYMnQ0V9WV2foyzQRmh4RMeSK1-KCjvwUHVHClq99GZMkbCqVAwYpCTcwB4Y35SvPVHoNgF5rM-v4eSmCFxmxXHzfXsdgY8dL3mQXXu6B1nHmp6CA-fcdgFxnnFhJhKPL~uvqlTCjVcwOGuvlc3WwLG1~odxfcrD9gQVmmQrIQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				-
			- Find the 1st & last occurance of an element in string , In this first we need to declare two static variables in the class first and last
			- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fa4261789-7603-4d36-9cc7-73da012152c82022_06_16_image.png?Expires=4808960547&Signature=b6LiDjcym~JuxjxP-ZXFIpE5k2AeVWlyN7Ad9nSJWqyO6I5FGtalIA6KST4XVuIvGDjFppJobdIJC~PMzUBWo4YY1S7mVM6nls7lLfkxwx-JWaCfKGNlDuMvjohetUq-Ws1ZTcXaaivlomb4-bduFHCipUQ4OaKX72ZFkS2DlcDKguWLfPZIVSXvg1GOtZNkZ9BMKFT~cZTB9IaEkqlLW~lzHMfZZlzMlrEiNP1IATLZDovprMnX4WKfTwRgsaFN3srlXFcTfrcXE209zM1g5q48tz4oJdNpoKzK0aj8uWxe9nkw00jT0-6qA9A1KWRNYPVPqDhKNVfISfmkZwfW2w__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Time complexity -> O(n)
			-
		- Array Strictly increasing using recursion
			- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f49b4e264-490d-4e4f-9dca-58b3e6a26c252022_06_16_image.png?Expires=4808967298&Signature=dU6sqxuABydg07CCAhS2ttMeUpCQl5ui0Pb3xgObenyyDPFeUVYy01UiQeWonpJ73sIDFbh7cDiJ12KCTv~DZcc3xhuOYm7z3j61zg1Vfk1VyML2I9aEAHXjJBobrLVf05VxcJGdK0jVe3d7~9ATBPVC6TcJhlsn9uPSdGcQ0v3MU~wR1p2lB1zEZewSciiJyF4QO95g2im~NSo0OFzbdTVVU6jD1yJQIM8nrAd~IW0jblIi9M-iqGwXuieUsaU8dtJJERrGYVZMPvMvcXynjOodeV1d6jzkeBa8tvtjZa0ckpy449BXBTom4NnU9cRLeJhjLFiYpsSRy8cfoTdieg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Time complexity -> O(n)
			-
		- Move All 'x' to the end of the string
			- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472ff82279c3-8df1-4f6b-bff6-ccd21e6d49572022_06_16_image.png?Expires=4808968527&Signature=PCMu188MckxlbhdApKc6u2YcUKiUiRCklKbht1uRS97yzmswe6hQgDy8DCKcyFfOb4QBXA8xzw8YjNH1lA-v7IwIBwPzUufDfLRvfz6sNl8VZrue1xTEQnsRlT9rp3zFDAio2KQPPrkzkcOjuAp-JiEjfYx4aLnmSkzscbhtRIqqficX2aVKBUy6bbqX7Im6cSB5FpR71my4u8IMV0iyW~xQJqMsKU06hJbzl4a2hbZToF4pk4MPgc21mMzRAGLA8JhvKkvm7HC9Gu8yOnxKXvKKBot68J~zdcqRW88sPZdR9PeRh0W1s9Vdn2IgeHPCLpEWt9ZQkOzklOTEErlCCw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Time complexity -> O(n)
		- Remove Duplicates
			- In this problem we take a static boolean array of size 26 which tells weather the character is duplicate or not . ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f0e8f5dd4-eae7-4e10-9440-7940674bce642022_06_16_image.png?Expires=4808969662&Signature=DnyNrtNwEuf1DSBSOU~dOJ2tSdruA6MLOuIKO2BJNXAlM3yaqBhT33z4OMx5tWD61YKi8q9Gu0L94zLCR~gHU0~ICr~EJF2utCQMaGNuniQEA2Wda~695c2JfbVoNtH~YWDXmODWk7zi~zwccrCSaQwPlhI09vlO4VY8lsM~QLJhXjr0i4A0EPZxxb0apBNJSQgc3lCvcxNev8UYGo2qK-MprGfjqIn2CtJ0b0~CgOi7uKl0K4F33EJmhExVeJOLGxF~rQYL0QOw8r0ntHObGL6Bxlv~h82MjmIYcVqRitZDWV3iRDE-RaaF9F4mnAbo7X15om0i513Dsu17OpqoEw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Time complexity -> O(n)
		- Sub Sequences
			- we make two recursive calls , first is with the current string and other is without the current string ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472ffed56249-6191-4b45-b6d0-5ceef61b19d42022_06_16_image.png?Expires=4808973861&Signature=lOmP4IG5OTPRqFWqELxPUM9T8w5WB5CV5tFVo4ZZxskt7SB5x0ZcWfFEncpJuDUvmC3s1T7OVvOztFixGOn9~k3mRFD0oiKo3798aaIu5Qhdm-BnY7U9vGL0W2gIZJGKzi6pntE05nqHZe4Zd2weBofDtW0C0QONnaU1yFOZyO4vNKD~efzRBGmVAhDXAdsIXtQaZUte3NvMG2YgOJliOKTu7cSxhKtBTmzA11dwNik~lRGm6TrZhOGyyFNXziB~8KYM4ZMckgiZvKvIazi06Hy-gM~X1CHhnBzCdnvIiFkdQKbtqbIIvf-vMvh8ZuDEoafJvpWMCFLnsCB2S3A9GQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Time complexity -> O(2^n)
		- Print Keypad combination
			- First we take an array of strings of the string present in the keypad
			- ![2022_06_16_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f1076c481-a975-439d-a974-8fb1f97341432022_06_16_image.png?Expires=4808978393&Signature=mAslrt6eL7JXq1dqeyCKl-MCFYk5oldlG0uc~0ng4ao5CdCyI1wDjy6IiNQCHFqwD0YxCIDIwvNFNEDNECLcpHwDD5pctrfb~D0cBpjVEf-e2FY0UXjf-jKlINzZh9~tPL-Tmk8BbEdl034FOXP0nyUt5SU7IJ~SF~va~OCDe~ITMiwOPLmQYdQAovsVzoUuq~2TL~Vc8Ei6sZxPYLuviyzMPfmd~mtUVtthrdL440Vysax9nsAB4l8fgfGbyLbtj~wiyZjLbEhjVhXP~xkX31Vc6v~UqsD8c3T1ztQe2b~XKs0vztAPA-eiTbi8GwgXLM6kFmN-HeThqjVFJaL88Q__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Time complexity -> O(4^n)
			-
		- Print Permutations
			- If n is the length of the string then the number of permutations will be n! [12:00](https://www.youtube.com/watch?v=xZykmhcWGuY)
			- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f66077d2b-3e90-47c0-b664-cac70da5adf12022_06_18_image.png?Expires=4809098075&Signature=hW0-Ks6LVmHSFgJi~9CFENHYz5UnTUUBdsbYfg5wbLR8JUldLELQ37Lpcy7Ut9Ku5O8iuWCHIpgsPSyOOo9Qi51WapZw9iCHtzuMXmkS2ntHwQXRJm9muKcLjDy-DKcNTy7dISgApgiZXkkxW7J26V527LFeB~VYbubIfBQ~ocqfF2p4RCIPSamuWfaGaKQ7-r-4mR3Y7Zexk20FoJ9otyP1jua2eyEWdY0GIN-l84kYewWLPE~e39KxSQ0Gq8kVrPQrcmdf-Ohk-qvBx3Hyfh-uHf9kukCWFpZeyS2rpYBrt79eTpULamxzQFMvvOY3DbOMJrS9bHWUNl5ZA29ZhQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- Maze Problem
			- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f3c17714a-3d6c-4f11-a2d9-58a2dc75a13c2022_06_18_image.png?Expires=4809132448&Signature=eGDOOsG3AORtSVKBUw4bZ~L379vY~VWhp~c-WmpxnsK~GfzCJldFf44O1nSJLlbrnbQ1bQHLqsilKkIKPxHtBuJRlTLAtIs3R4DVDDr9UHgDZbpeWbE03dpwIET03FEubw5xW6Odt4ZdFBYehDqasHHDJ2YTfCTlY6stEfpX5JQHVhpk-RVqf~E08f8SHVSlNXEJWvFZ60U3f5LlbsioztySyhbrFqFYqsxGBPFjBlYyhxba1YEy~VWgENoHlFY4zQz~8ohpqWTRCwqP-KQrwHArkuAUs525TNwY8nb7vIcADatZw7rG7nWlT-wx-4AstCCdSkAGeyos~BjVB7hUGQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- Tilling Problem
			- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f0b5575ba-3301-4a76-afb8-4dd4505bbfbd2022_06_18_image.png?Expires=4809137216&Signature=AyMuRqj5652GjIaHPudhtOOBTXZx9hxfwj4JTyC2pTMiaYJjer8Rur3t73SDW59B~t597jybA8zH4038VOU~dt7RwFB04vlP7zpcDEmxBgKVqLE85QrGjmXa9hYpRN1ROoqspLMiZFnijZymuTKI7lRvk1qFgJW-OkvSt1QO7yBF4OSbpkALqq3JDe-B~avo-BzXETzAknGQwIbxUqYKZfZJTCPbX3OAKc2HCZhKlpf1WVLeMXLjbqtubwQWrRE0facAzqD5aCawO17a-AYerPa7Pou54RL-0ACTuqw7WYaIh5bS7~Y98htaz8nx5B1xPo3ROgiulqpS6REa85MmOw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Q place the tiles of size of 1*m in a floor of size n*m ?
		- Sets using recursion
			- ![2022_06_18_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fccabdb54-3346-4d4d-aeb1-63380d0b9fb32022_06_18_image.png?Expires=4809164336&Signature=g5PelILz5AGz-swos4LubOx7poSRXLWVtgiLv0IxBUd2xXg~qHfmAKJEvg5eNkqZKJK5~LAFhn6Acql50zg2AtdBOc0sUJREibKba-1lSB9zm4NqJCW230IpFTf2c9Or~PCgFTnYdgsU~1ulkFZHTNg8rHpw~TsjSNuNcE9o8hS2dLBVtEqI0ehPNxQhI1NNpnkLO914s~RF1KhGRFTsSGhfSEagRcB8-mL1Z3sbv~Ie5OEIqoMfvHamfhJrHcD4UL0A1FWsvkbhXyl4Jqtt3ObaHy7yhkJQLoZObOrATfwA77WhLa-uDJ1SJY-cn-0dN8mXnVFit525p6Zjh8rVuQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- Rectangle Area
			- ![2022_06_19_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f47de08ea-9cb4-4647-974b-094641ddf1942022_06_19_image.png?Expires=4809215030&Signature=FLe7879mgY0qHsrzYarAbdMVRTxJWHK4rAuXwU9U5JlN2rjEZnaAHO2nsaoimHh~Sce8Fs2-UTfWm90Lh2o0jMsxEwJ5t-eCsd2xQ0u63-PLQ6DtBxANnpBYShiSaVC8zaQAiRVNQCY5Y0jJ0FS2Lq~-J3NyzzI1r-BMLQe4BFVGT34yCa4eB~1NHF3SDBROxK4IKXi7WfRgNCp6igMqw2QrNbnRM6RL~HIqlNNIWaTC7RUPlHvnyFSDzFz8TtaCovYL1GMPDyE1Fg5XW6Di4I5FGd4Nfzg5CDBwZYzE7yNDmu~ZdO-pmGYATWwy0mFmKXaSZojn6Zroz7tMObqbDQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- #+BEGIN_CAUTION
			  in the above Question why max is taken not able to understand Why max and minimum is taken when calculating overlapped area  [Question](https://leetcode.com/problems/rectangle-area/submissions/) 
			  #+END_CAUTION
			-
			-
		- ## HashMap
			- HashMap allows us to store key and value pair , where keys should be unique . If you try to insert key ,it will replace element of the corresponding key . It is easy to perform operations using the key index like updation , deletion , etc
			- ^^HashMap<Integer,Integer> freq = new HashMap<>();^^
			- Below image is for traversal of HashMap , m.getKey , getValue return the key with the datatype of object
			- ![2022_06_21_image.png](https://cdn.logseq.com/%2Fe9d53623-78a3-4257-a530-8b0aace3ddd92022_06_21_image.png?Expires=4809434482&Signature=CzqNTgG0jZJWGSpbUW41tcn4BMwg~Zd5btk5FlMGqK3YiwqSZ~-l7858TDHFLCtsWcd7MdeDB7vesEPIXmesuuZYW5pY~Hfm56vH4g8QdYLRLYcRVYo5vtt7GrQeFp~EU9yVDpqDudtkZ1fC2BqalW9HQK9JDfGp-EhmTx3OonMqsOQp~TJZV5DU5FW9wpTZquAX-cU4DUsEyazxx09Z34rSDcr8JulT4MoUtX2Qb1YHVun5Qe-Ru2Bsg2LAKJqpoYRi4J7COMHEfokgCvDAuTqy~sQmBg7BRaMGua6eDrk~mW3gu8Gk-fCwWuEUPV8vpkWfzAVSN-f7QGQPYYXZXA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA){:height 101, :width 556}
			- ^^map.put(key,value)^^
			- map.get(key) -> this will return the value of the particular key
			- To find the freq of all the elements in the array Logic is ![2022_06_25_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fbc545523-fa2e-4730-a953-a3362619f65f2022_06_25_image.png?Expires=4809729907&Signature=liNT9i9RzNG1VHmInG0pAZaY4CrwbyL3pYhl9j-tTfwgmjiBwN4SpvvxXEOGwLzVuiRbcBvdna7KsZ5YEbEsmB~Z6YJ4SG0BfpKgf79G0-8rZRYpQU5DIYI69yn1zwIZuZQ1jOJZSjWKynvKEcyLyQPN1B68ZKxNQfWPZmJrqbrOJUsZFIeVAsFNQHT8C7c2swgTMSiBa339MZnS9j5SraWs5xId3GSXxLSieWk-dJ~9e41I6xcCCJxSR5gyeNQoSFDe41RoIqC82B-1fk2~O0dy5hMTIOoc1I8owziqWK3K0UscKzGhzoh-vCsCFWj-Xg2g49tDz68MNb7GNbPD3Q__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
			-
		-
		- ### Priority Queue
			- A priority queue is a special type of queue in which each element is associated with a priority and is served according to its priority. If elements with the same priority occur, they are served according to their order in the queue.
			- #### Find the K_largest element using Heap in c++
				- ![2022_07_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fb7f8277a-e51a-4223-94a8-55fc395cd8a22022_07_01_image.png?Expires=4810295389&Signature=IzZaT~U4fuaS4C2C-aSKN4yWLTBhLdcYZZgX5prImxa9KHuQ58GeEm8nKMYU3uJgWVgBM0Ytt8lEi~5FkWmCrD~cnIBGm3VUy50HcZ6c6~SZKtxnpYziODwVheFKHCvwTVPPIFWqsNh9cwn1gdUW~7uHwItJdlm18rYPFPaCBaZX3KC7vcL-lpOtSGef9yre4K9vDK0MBS3BrnNiLOzNo6NH86h1JYTe2ADduMb3tI4pQDYqVWHJiWclVsFvlOf8Z0DVsnQ4wMKlvM4eGlfpDFEEMvdElim-7hDhvaeRyGsz1wnbECwrN4KMuaS7mHYtBlR60xFLCPBh2rzod-TbMg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				-
			-
			-
			- #### Find the K_smallest element using Heap in c++
				- ![2022_07_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f0686b8ca-efcc-4a84-9f31-6caa4e4eb4052022_07_01_image.png?Expires=4810295446&Signature=nsrIhc8GUT2A3UwupdbwLMLUSHRnhxst~32NziMOdwbFaWDK~SOmYgwtwGcIjcyZ5hv8rgLf8qIglF9T5NlpkgZnjA-GpuYVDulfxxxrVZwmxI8~stXWlvg-n5fUnHkR~XyRJPp4jDeslS6Uy6ybiw46iXsF32ZxHxgDraLbAP1wxHBw~JBgFLWMiFTk9nzvL45xGcx-Bnn2Mr0TBwmfQlhOkICurG~CL-XDE7donMTiJl-U0SbLlCk5gY5bs28QipBK9s10u9kZ-QQ4t~dBy2CuDFGuPmNALonmvmi4Ps-lqn6GTtpmj0uVxgKIcUvuRzEZfEmJGQDPJxVhmW8xfw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- ### DFS ( c++)
			- It is basically a traversal ( Mainly recursive in nature ).
			- Pick on vertex .
			- Call adjacent of that vertex .
			- Again call DFS of that adjacent vertex .
				- #+BEGIN_VERSE
				  ^^(Main DFS Function)^^
				  void dfs(int node , unordered_map<int , bool > &visited, unordered_map<int> , list<int> , adj , vector<int> &component){
				     component.push_back(node);
				  visited[node]=true;
				  
				  for (auto i:adj[node]){
				       if(!visited[i]){
				  dfs(i,visited, adj , component );
				        }
				     } 
				  }
				  
				  unordered_map<int> , list<int> , adj ;
				  for(int i = 0 ; i<edges.size() ; i++){
				  int u = edges[i][0];
				  int v = edges[i][1];
				   adj[u].push_back(v);
				  adj[v].push_back(u);
				  }
				  
				  vector<vector<int>> ans;
				  unordered_map <int, bool > visited;
				  for ( int i = 0 ; i<V ; i++){
				          if(!visited[i]){
				  vector<int> component;
				  dfs(i,visited, adjList , component);
				  ans.push_back(component); 
				     }
				  }
				  return ans;
				  #+END_VERSE
				-
				-
		- ### Cycle Detection ( c++ )
			- Undirected Graph
				- #include<bits/stdc++.h>
				- using namespace std;
				- bool iscycle(int src ,vector<vector<int>> &adj , vector<bool> &visited , int parent){
				    visited[src]=true;
				    for(auto i : adj[src]){ // This loop to use to 
				        if(i!=parent){    // iterate through the adj list 
				            if(visited[i]){
				                return true;
				            }
				            if(!visited[i] and iscycle(i,adj,visited,src)){
				                return true;
				            };
				        }
				    }
				    return false;
				  }
				  int main(){
				    int n ,m ; 
				    cin>>n>>m;
				    vector<vector<int>> adj(n);
				    for(int i = 0 ; i<m ; i++){
				        int u,v ; cin>>u>>v;
				        adj[u].push_back(v);
				        adj[v].push_back(u);
				    }
				    bool cycle = false;
				    vector<bool> visited(n,false);
				    for(int i = 0  ;i<n ; i++){
				        if(!visited[i] and iscycle(i,adj,visited,-1)){
				            cycle=true;
				        }
				    }
				    if(cycle){
				        cout<<"Cycle is present"<<endl;
				    }
				    else{
				        cout<<"Cycle is not present"<<endl;
				    }
				    return 0;
				  }
		-
			- #+BEGIN_IMPORTANT
			  To Store the frequency of each element in the vector we can use the map to store it just like this 
			  ![2022_07_14_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f70b3d8c0-0091-4e8b-ac59-2d7130f61b1a2022_07_14_image.png?Expires=4811392668&Signature=eVKNg-Y949IfM-qXs4dVAfYF7jzoyv7FERVOgwXRUck7wuMY5hKXaXBk3r50VEhJuAlb9I3w6xgz8vpl2a8ilQWzrUaXew2z4v1eEq3DlB1Gcux75m6-jM2mM5dUSriSC~cbrNn8erHwGme4W4cjeWoA0JL3sFinHgHXMLReqjvkEHBATxkU-yDlTmufo8mI47vc5mGXjmSIeV0gAp-HyxV9-59FdisHkCWtn4SjsqIrq8IiqaY8ThHrRemw1YMgrkDtoceTKtkmtZJVKGTzX7GvZ4VLiVmCgoFZr8GEbZREniWotjgSEC1hVPSRMUq2B88WxNVucGI-DHTFXQ8Dbw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA) 
			  #+END_IMPORTANT
			-
			-
		- ### Find the middle element in the linked list
			- The approach I am gonna be using to find the middle element is slow and fast pointer .
			- ![2022_07_19_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fbf0657fd-6099-4b9c-b42e-d7e61d6dca392022_07_19_image.png?Expires=4811852683&Signature=SYjtF1NhyG0qH55it9Y2AlpU5lW7nD-qwi9qb4O5Pb~QScAG3VqDGXUawHTPldrwhI6AYZiAbmY-B2jFvlywhbEPEoBktLuOmOzgCUpYwGBJ24cCiMRROyxbI577RDoqd~GM8meHnGNbgfPtpdIAacd7a5m8LLRF7jLQjy-G8pX6iJpJCt65BvLy1qrVO~LPlosZ-EGUTJZTPRHCwo4vHHcEqR7GKH-wFAeaUKzy-WJVMjTWR62YFBw3vBEGA0dLFcrMuTcRwizR~pU5TCAxelr0QYSepMLIQTAgsaoPHnat1kvsGAiTXJd-gEx2yZR~NvyBIfmtDDpPHsxLsd0uJQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		- ### Delete the middle element of the linked list
			- First we will find the middle element from the fast and slow pointer approach and then do this
			- ![2022_07_19_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f30b1bde0-7a48-49c5-82bd-35c825e52f552022_07_19_image.png?Expires=4811853412&Signature=bXUC73dvsmdePepiS6vVRtqcyqKMlUnQ4~N2E5olpB3Dpc8vjzOstzWvS5k6JtCr1Kq8kMntRHrl6DAqSPSBQOEd1iGTxUB9FAnn-jFrb-yJn3LSPIkgQf8qZ5lz~Lxp47HifgF4~Sp0aAxGs6IKaGTQJ1aWhS2Y7sWheJRQoXxaDSriGwFfV2spwfi-QSdxf1idDa351UBjdPCVwp5nOHKeiuw7CTnB5yU~IsynPubreRM0mPr3vzGJ~isnkb1NWxt3hhhnWqqr9xwo8ulnX8Cl36OFXYmSKxWazb9QEKg2ZlC8KXobvzLMAuhOUBAtW-tIlRPGY93A-~CRQQNhlg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- #### Find the Maximum guest staying in the hotel Problem
			- In this we are using vector pair but below is the optimized solution the brute force is yet to come
			- ![2022_07_25_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fd19b49a0-be98-432b-8e90-31d19e6c23de2022_07_25_image.png?Expires=4812336643&Signature=UDILgHTqHeFnyH0KTXj2u~-GdlCMto0QeH4YSXOS1Kl9w3hHM5jcc3IxV9dG2YCmJEXFP65f7iv-GtlWFPv9f3S5QRsuK~KGmbsQx9PufjWedJi3xf6zbPsrvcSa3bgzUPWZv5Ut0NMuw4iuVOZRfRzLXrKLpfiHd0ejxAr2PWprVy-hFTZ~s8fJlyS1TghZ7VdGF2IiNWRQR2FdG5ogIX06MP3JcLiV9eWBZDrfTlhP8ynk0DQ5UCknz0cPgAYlu4MPh9XDwgs2OCmN5RVbh0NhzBCmqgirTgtzBg0p8xrxfERPYuRvKVESRw7vb3YtSJ7Vg57icgTV5eIWYEGi7w__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- #+BEGIN_TIP
			  To Sort the vector in decreasing order we need to do this -> 
			  ![2022_07_27_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f4a1587cb-2355-4b47-86bd-973678730c9e2022_07_27_image.png?Expires=4812537214&Signature=UZGOLg4XXcQwFEmD5cwbuQevRDaYFy2b6wZ~mBvy8uwgQSpPyvmh7OUKOARM-tzRHD24kxeZ~uCqn-1711tQlB6U7jj95hcTCK636S1xRLYfvBjBpHQTxz6YrK80U~zSdEcmMEEt9R2dIEo2s4fS7w5w2Mh8h6HBcWj789edY-TW-7KOIqwl~8dfGCIdTspB8QhxwJzFTA8ncb0cJNjdTqGRscwSpRea2jujMLyCEeKk4Xn44qOLVpnhUgEkYvJPnGaxwqnrLI1qP6gT0jvAbJMoaxRxLQK8YJT0FO~~uvPgd9J~0VO9SfcEn-tBbVkf2eJforN26uHT~xOzHJ6zEw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA) 
			  #+END_TIP
			-
		-
		- ### Find the Next Permutation
			- [Problem Link](https://leetcode.com/problems/next-permutation/solution/)
			- First we will find the first decreasing element from the right side of the sequence .
			- The we will again traverse the sequence and fint the next highest number then the first decreasing element ( from the above point ) fro the right side of the sequence .
			- For the remaining array we just need to reverse the sequence from i + 1 to end of the sequence .
			- ![2022_07_31_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f9e67fe47-2380-42da-838b-c30bbe7af8472022_07_31_image.png?Expires=4812848743&Signature=lYWaOKv1JdmC74G2RV4TwShNOJa4r~krkRWw0cwGk-B0ugWjdMMkXT~YIK7h2pUkTNuEBgjQKwzamEjS32WjlxYAKWDE1hlCNLAWycpRzyFP7-bfqb2KbE2gO7US2kDMExjzbtc4v6SHm8uZFch4MRe3AsOejXXsDK4-l2z~a6S8rH1Q6ssJIcqk6FnLVh4nmERFBhwbUAb0l7C3oHws1uzpVpqa9DERq~5kh5GkQ4I-GFooigJH9xRLJWRRqxtlg2YOrJ6FYHJg2gzcsVtrtjsnAn9UQFyr3jPiB6Uv8TKrWQaQTC6KhRRT3rvfU~SdcZbA~utl~8gd-JJ8JrxK5Q__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
		- ### Backtraking basic problem
			- Combination Sum ( In  java ) [Problem link](https://leetcode.com/problems/combination-sum/)
				- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fccd92918-6b9f-4e6a-b8bd-47e688b5e16f2022_08_01_image.png?Expires=4812928715&Signature=IgpKZ-mSSNsGJKlh~vZHAtnbcEuUNlE5Iv~mPflddCL8ZB2JLKLEkHcu0uLRUD-jYJyqXy7OJxEBSKeZS0Q8EsICn~lXIVj~2mt7bmKYhTf7zpTlQWGDiOYasWqihoka7hrV73eLgLbvNKOaU1Ct7W2WCNy9w95uVCluwcESIEKsQXG90UgrBleOHl2z~HE88ghucnsSA23msSYtv1Z8W0IcjO4VMAvAayvRGQcyAh6CQQTYRHYr7EcEU6EWs-Zk5J-fmRqNf2kRVbcFkWe0Cms5Ii4B0sdb010w0xhoL4KyKphl6saqjimU5ir2QHEseDny6E~Xifv8XSbH6tTTzQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				-
			- Combinations Backtracking ( in Java )
				- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fa89c1912-83a6-4dfc-9af9-5a4908e0fc0c2022_08_01_image.png?Expires=4812930954&Signature=jsNAeBew7yIWz5-NP1dCsNsqtaQOkrmA-UxlXmHy-r1szVOKHqU4j9T8GdiHqjy6QzWf1jSsochIhbptfjuIPmisX~By9hsHbBw80P4hHKDMAiqo3kdLBvpBNyRlBT73dC1j10lIxz7GBEU~qerQAeTUC8h1WEXmCStncB2tfLcdtbPUF8IEF3SoSaAUGtr-BSQJ1w5SsPGsLgrFsB5yRsmqggIGwjdJNSqbr2wVrqShRBBV8t43Z2o-9st07WzHrU1FZqduXdxPlBtcDpq9-jE-ovwLBDBPFsA-735KFihOmP21R66XDvmHsCUEdhtj5PB4Wq-GV0xpirsYs-5jfw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
				-
		- ## N-Queen Problem ( c++ )
			- Below is the implementation of the isSafe function
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f21a19549-c710-41b5-be4a-86bb6e059cdc2022_08_01_image.png?Expires=4812975225&Signature=Drx2sQ~5fbq88lQH5-MpfqPH-HgHT~2dV-rq~o-miSPd8Lg6LD0IiN2ghz4Ci1Mfv0irSwkVa4mfG9xtanLWKw0jdKrY9lumnK1WREG6GmYt4~uhq9PEKW5v7eC1zE2VJhYrx-A-caKwTvRPPbOSolHscV~AfugMWBFJLApZHB5Becw8tLM2UUXs~Fp0RYlUtkgc3TJkrIU9629dlA1aKYs1XFBN4bPKoLhyjcvJjjtob8DEHuk5Jm8QrLgxkJF98wka637mOhlW8wtrt34k2GEX~bfJbqFmJEuenhfulpmc3TU7WEibASroj1U1LBXiYjnQw2iq2Gzpm3eMARopxQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- First we will check if any queen is already present horizontally
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fc5ed4139-34c2-48b3-8481-0cbbb870ac682022_08_01_image.png?Expires=4812975356&Signature=VqOfoYIKbKTA1CDg1WpOpjjlg9blAFiwcDUdrmO-Id1N2KMqkeSQrpSp~hjrFq9r5XEDCvxZuYF5eb~xNummbe9RbhIpWLR5E0wZR99F3I3IlcXJY~Db-muykYshx3Vs6Kt0s6wELVQQs12sltXeZWVrRW4DXyEoxq~mnCnjxGe2ZD7SE-sceKLO8v-tp1ClD9Bqm0Y-LqL91wyCiN0bWWgjQnIWryEb-ShTNDnhCquC0kSL4XOfRmMruR2CnnXRQUYkJxs2prN3udVS6se0P7PMs1xW5tLqxlTESpFf6EWuvYwm805avNtOfJNbLnYN9vbTtkf6kuSrfrmzzrPzug__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Second we willl check if any queen is present on left diagonal
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f765d24db-982c-4588-8607-e4bf8f5321f32022_08_01_image.png?Expires=4812975381&Signature=JZZMBvEoa7U9d3GfxkYsMvO7ALrFsHhm3mGEIiyKYgIQpYYVXMJJY4KwHQT88GYYE2phzIp3vGsvm-oTRV9X~OFM8CVsQE~0xuB8u1kollH~-fcRFQShuqe0BBDfvda5mzgN665-X2pRPvUMLAWoLoGFrMs9ca74X2sEWmZXrSJwtEWxDb4u5iAkwbpc1RkeN0U8q-blxcBhE11XYcZT~Gf6KwgmoR2rgWJBOIJQ7MMMUtqNKwDsdUxanq00QhKRf1Atd6FWxNnG~i0D05e97k-lKHjWljraqvzJZpptMEzby~wQ6WtxC2nUIk-gozjxqLLOlDosU5sDkcfh8nWiaw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Third we will check if any queen is present on right diagonal
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fddba94b2-f505-4d59-8a03-9c6d2bde8b9d2022_08_01_image.png?Expires=4812975433&Signature=hv2KhT-D7zGZmBV1UidRu03o6YWZ7BRYCCPE3PtxcEeBuPMJCpvKgWdQuXwjIyR~dpjQDT8YvPLSuqLXIIlhPjXrLxQGi2dYla~QqbvxUerQgIDrS1Wz6a9sCaGVhNCW1KzUZJ0eUntZFION3oRdOYSuSHhyvC~ci8wNhhGMsGleVWcKNukM0J3IqUEFUqS-C8tDFusABEYKmEp2qHhkMDuw4FjYD-2uWmQH91XtKjIaYdXRQNsyV-Yo7vuCNahU~ZTkhtPOe-4rAdgqh70ChTmxmYUMBf887WouScjC~YavCyLNvW4i2rRExt8xudDE098MElrZL~zM7zqv0aoaDA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- The Main function that will place the queen to appropriate place is
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f8b80fc6d-4405-40f8-994c-d496dd1d9dd72022_08_01_image.png?Expires=4812975512&Signature=nN7U1lQm-~z8tNs7X-tWtYwhE8yc5L0MfAwlui2ZDIL-qFVK3nEMr5buKAMC~66m8SNnkL0qZIS144~QKU4Bp-uBztEwuoWYtO8lNbCNTFXuaWsrVkq~aqdhM~x8JNuKYAChjgmQ6gKJ3NXD3pp60UQTMpVNOtJcYQFP3hUdnfE4m58GG3-8BLcE6AxL5LFZwKAnEW19bDbaNFoS63vhXqYbEn0GTurknK8dHfoWJNT-Z3u3o3QLSJQtinXpYobxP7zi6o6kMUSqNErbn2--p2Kn4chEyCr3QpOUf8QES1ZQrHY2BrA73CqkaqRN3-s8labYEX71e5NKkDFjIF5rWw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- This condition will check weather we have traversed all the positions of the row  on the chess board
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f65545197-5f36-4bbc-8af0-10f1d27c352c2022_08_01_image.png?Expires=4812975579&Signature=AK3NOleeQ1Y6eD4-dPpCy4DgCFBNC8uKkbB0Ox0VYoEaRRtet6YpMkj-mMvJgqEXObh~Oy6yhBx5HPzpHB0djbpfEC71lWzR0P8smi-o573PkRZdwsgijZy-LhzRN7We3RJPtNd5k00GQiMYQAf6nlGGsbVq3N7-4HS7vyZX1pijl5lVxtde-N0YTPoGfPOMVp5QxJuLneqBURUpwy1SSoI~bJc-0IDCI4VvwJKBBQtYVqhiis6csBJkWNVsMma0okkezRG1QAfUV0hgzJsfe7R2z-CgMkoe7TazKJKJu1aCEYlafsI9z9GnP2SA6S27MrnmZOA5f-OfckGIaHwwzQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Output
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f29cfa4a0-4239-4d4a-a0ab-521319c6baae2022_08_01_image.png?Expires=4812975694&Signature=c21COye41Dn1ZgnchqraO-3ZDGY~w6CdA5DjONnP8NZqMFWxzL8VjyDuCrGmy3QNceCMGr63GEHBF2ci9MZvXcAOH8xdaK-jDCMq5lqr9ippc5D-JCRjsyTVEh8~54tFBFt3RUuOlZtNudhn4-jLNmwu67a0JBQDdnsz0VMrQ9mmCHto3Fm9CxiJXJv1~RLEhxkvMrcx2QlTvlUA6OxJDNGwsy4i5eMWt2q0jNVrX53po4Nl4fNOF~ScLfPDEMp2AKhkUxKRPR47i33NeJjGVFmdiHdoh~T0gaNmx2W-hg1lHM2m1dyZn0qYBIkLrsfHn3BIbkaMuKPt4MsQfD9Veg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			-
			-
			-