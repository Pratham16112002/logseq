- [[HashMap]]
- [[Trees]]
- [[Bit Manipulation]]
- [[Queue]]
- [[Recursion]]
- [[Linked List]]
- [[Arrays]]
- [[Dynamic Programming]]
- [[Sorting]]
- [[Graphs]]
- [[Competitive Programming]]
- [[HashTable]]
- [[Heap]]
- [[Design Questions]]
- [[Binary Search]]
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
-
	-
		-
		- ### DFS ( c++)
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
			-
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f765d24db-982c-4588-8607-e4bf8f5321f32022_08_01_image.png?Expires=4812975381&Signature=JZZMBvEoa7U9d3GfxkYsMvO7ALrFsHhm3mGEIiyKYgIQpYYVXMJJY4KwHQT88GYYE2phzIp3vGsvm-oTRV9X~OFM8CVsQE~0xuB8u1kollH~-fcRFQShuqe0BBDfvda5mzgN665-X2pRPvUMLAWoLoGFrMs9ca74X2sEWmZXrSJwtEWxDb4u5iAkwbpc1RkeN0U8q-blxcBhE11XYcZT~Gf6KwgmoR2rgWJBOIJQ7MMMUtqNKwDsdUxanq00QhKRf1Atd6FWxNnG~i0D05e97k-lKHjWljraqvzJZpptMEzby~wQ6WtxC2nUIk-gozjxqLLOlDosU5sDkcfh8nWiaw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Third we will check if any queen is present on right diagonal
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fddba94b2-f505-4d59-8a03-9c6d2bde8b9d2022_08_01_image.png?Expires=4812975433&Signature=hv2KhT-D7zGZmBV1UidRu03o6YWZ7BRYCCPE3PtxcEeBuPMJCpvKgWdQuXwjIyR~dpjQDT8YvPLSuqLXIIlhPjXrLxQGi2dYla~QqbvxUerQgIDrS1Wz6a9sCaGVhNCW1KzUZJ0eUntZFION3oRdOYSuSHhyvC~ci8wNhhGMsGleVWcKNukM0J3IqUEFUqS-C8tDFusABEYKmEp2qHhkMDuw4FjYD-2uWmQH91XtKjIaYdXRQNsyV-Yo7vuCNahU~ZTkhtPOe-4rAdgqh70ChTmxmYUMBf887WouScjC~YavCyLNvW4i2rRExt8xudDE098MElrZL~zM7zqv0aoaDA__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- The Main function that will place the queen to appropriate place is
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f8b80fc6d-4405-40f8-994c-d496dd1d9dd72022_08_01_image.png?Expires=4812975512&Signature=nN7U1lQm-~z8tNs7X-tWtYwhE8yc5L0MfAwlui2ZDIL-qFVK3nEMr5buKAMC~66m8SNnkL0qZIS144~QKU4Bp-uBztEwuoWYtO8lNbCNTFXuaWsrVkq~aqdhM~x8JNuKYAChjgmQ6gKJ3NXD3pp60UQTMpVNOtJcYQFP3hUdnfE4m58GG3-8BLcE6AxL5LFZwKAnEW19bDbaNFoS63vhXqYbEn0GTurknK8dHfoWJNT-Z3u3o3QLSJQtinXpYobxP7zi6o6kMUSqNErbn2--p2Kn4chEyCr3QpOUf8QES1ZQrHY2BrA73CqkaqRN3-s8labYEX71e5NKkDFjIF5rWw__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- This condition will check weather we have traversed all the positions of the row  on the chess board
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f65545197-5f36-4bbc-8af0-10f1d27c352c2022_08_01_image.png?Expires=4812975579&Signature=AK3NOleeQ1Y6eD4-dPpCy4DgCFBNC8uKkbB0Ox0VYoEaRRtet6YpMkj-mMvJgqEXObh~Oy6yhBx5HPzpHB0djbpfEC71lWzR0P8smi-o573PkRZdwsgijZy-LhzRN7We3RJPtNd5k00GQiMYQAf6nlGGsbVq3N7-4HS7vyZX1pijl5lVxtde-N0YTPoGfPOMVp5QxJuLneqBURUpwy1SSoI~bJc-0IDCI4VvwJKBBQtYVqhiis6csBJkWNVsMma0okkezRG1QAfUV0hgzJsfe7R2z-CgMkoe7TazKJKJu1aCEYlafsI9z9GnP2SA6S27MrnmZOA5f-OfckGIaHwwzQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- Output
			- ![2022_08_01_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472f29cfa4a0-4239-4d4a-a0ab-521319c6baae2022_08_01_image.png?Expires=4812975694&Signature=c21COye41Dn1ZgnchqraO-3ZDGY~w6CdA5DjONnP8NZqMFWxzL8VjyDuCrGmy3QNceCMGr63GEHBF2ci9MZvXcAOH8xdaK-jDCMq5lqr9ippc5D-JCRjsyTVEh8~54tFBFt3RUuOlZtNudhn4-jLNmwu67a0JBQDdnsz0VMrQ9mmCHto3Fm9CxiJXJv1~RLEhxkvMrcx2QlTvlUA6OxJDNGwsy4i5eMWt2q0jNVrX53po4Nl4fNOF~ScLfPDEMp2AKhkUxKRPR47i33NeJjGVFmdiHdoh~T0gaNmx2W-hg1lHM2m1dyZn0qYBIkLrsfHn3BIbkaMuKPt4MsQfD9Veg__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
	- #### Coin Change Problem
		- This problem is best solved through recursion  , With Dynamic programming we can optimize the solution
		- #+BEGIN_NOTE
		  ![image.png](../assets/image_1659677012871_0.png) 
		  This method is used to fill the array 
		  #+END_NOTE
		- Code For problem
		- ![image.png](../assets/image_1659677200375_0.png){:height 551, :width 532}
	- Coin Change problem 2
		- In this problem we need to find all the ways to get  to the total amount with the given coins array
		- [LeetCode ](https://leetcode.com/problems/coin-change-2/submissions/)
		- We are taking 2D dp array ^^int dp[310][10010];^^
		- **[index][amount]**
		- We are passing another argument Index in the function which will take care of repeating ways to find amount , Because it will exhaust similar coins first and make all the ways and then move to the next .
		- Code for the problem
		- ![image.png](../assets/image_1659698073552_0.png)
	- ### Longest Common Subsequence
		- In This problem we are using Tabulation method ( using 2d array )
		- In 2d matrix we will traverse the 2d array one less index and fill it ->
			- If the ^^s1[i-1] == s2[j-1]^^ then we just add one to the corresponding left diagonal element and place it in 2d [i][j] i . e ^^dp[i-1][j-1]+1^^
			- If the ^^s1[i-1]!=s2[j-1]^^ then we just find the maximum of just above and just left side of the current index and replace with it i . e ^^Math.max(dp[i-1][j] , dp[i][j-1] );^^
			- #### Code For Problem
				- ![image.png](../assets/image_1659759924485_0.png)
		-
	- ### Edit distance
		- This is also an Dynamic programming ( Bottom Up approach ).
		- We will make 2d grid and fill it according to the below logic
		- if ^^s1.charAt(i - 1) == s2.charAt(j - 1)^^ then we will replace the element with the corresponding left diagonal
		- else ^^dp[i][j] = 1 + Math.min(Math.min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1])^^
		- ![image.png](../assets/image_1659803958584_0.png)
		- #### The White Knight ( DP Problem )
			- Algo -> 
			  1. First we will store the grid values in a 2D vector and then save the position of the knight by specifying the condition while taking input in our 2D vector ![image.png](../assets/image_1661066916137_0.png)
			  2. Then we will call our helper function and pass the arguments ![image.png](../assets/image_1661066961514_0.png){:height 36, :width 426}
			  3. The base condition of helper function will be ![image.png](../assets/image_1661067025047_0.png) 
			  4. If the value of a our dp array is not -1 then return the dp element 
			  5. Or if we encounter an P in our 2d vector then we will return ![image.png](../assets/image_1661067238563_0.png)
			  6. else ![image.png](../assets/image_1661068685055_0.png)
			  , The max4 function will return maximum of the 4 values that we pass in the function .
			- [Problem Link](https://www.codechef.com/submit/E1?tab=statement)
		- #### Most Frequent Element in array
			- 1. Brute force approach using nested loops 
			  ![image.png](../assets/image_1661070224374_0.png)
			- 2. Using Sorting and linear Search 
			  ![image.png](../assets/image_1661070263791_0.png)
			-
			-
		- #### Best time to buy and sell stock  ( Leetcode )
			- **The brute force** approach will be doing by creating an auxilary array which will store the maximum elements from left right , and then return the maximum difference between the given array and the auxilary array .
			  ^^Time complexity = O(n^2)^^
			- **Second Approach** we will store minimum price so far and also mantain a maximum profit which will store the maximum profit till the i the element while traversing the array .
		- #+BEGIN_NOTE
		  **Auto Keyword is used to declare a variable that has a complicated datatype , It automatically determine the data type of a variable**
		  #+END_NOTE
		  
		  if you want to iterate vector you can simply do 
		  
		  ```
		  for(auto it = v.begin() ; it!=v.end() ; ++it){
		   	cout<< (*it) << " "; 
		  }
		  ```
		- #### Multi set in C++ Standard Template Library
			- Multi sets are similar to sets , with the exception that multiple elements can have the same values .
				- [begin()](https://www.geeksforgeeks.org/multiset-begin-and-end-function-in-c-stl/) – Returns an iterator to the first element in the multiset –>  O(1)
				- [end()](https://www.geeksforgeeks.org/multiset-begin-and-end-function-in-c-stl/) – Returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
				- [size()](https://www.geeksforgeeks.org/multiset-size-in-c-stl-with-examples/) – Returns the number of elements in the multiset –> O(1)
				- [max_size()](https://www.geeksforgeeks.org/multiset-max_size-in-c-stl/) – Returns the maximum number of elements that the multiset can hold –> O(1)
				- [empty()](https://www.geeksforgeeks.org/multiset-empty-function-in-c-stl/) – Returns whether the multiset is empty –> O(1)
				- insert (x) – Inserts the element x in the multiset –> O(log n)
				- clear () – Removes all the elements from the multiset –> O(n)
				- erase(x) – Removes all the occurrences of x –> O(log n)
		- #### Clone Graph Leetcode
			- **Algo** : We need to traverse all nodes of original graph & as soon as we reach a node , we will make a copy node & call recursively for the rest of the graph .