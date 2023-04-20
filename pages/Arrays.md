-
	- list of items of same data types
		- Syntax for array in java ![2022_06_11_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fda705581-f2f5-4a19-a819-1bf7dc5a992c2022_06_11_image.png?Expires=4808568037&Signature=jFoqcx-xfbx2X3sXsGxVF4TKoxUiWNuMh2YDlD1IBr~8372jybslFf1IasfksVV7vagGp74JHtAss2B~8Y5-~adGtK3Cak4qDhdBkWhTfv5RiMeInUsD723tsMnXpCSWzY3yuSc3~U82lflysliCg51IPJ3NPdmH1COV5y9InBCLYNdUwiKeM5iebdf6loSEOS638k-J0R0dofUgFkbhk1GgthOzOEO5JwKo8UEbjRvocf0qmhHXtKEEyD8dkoF0d2NwllHPkFiZXWEkovgOybwk5EvfVDsQ1axg-xyGIyGE8PRqORDCXgiiIkZi7VQ1KdhH2e0HCtCv2fEKCFhAoQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
		- Defining array part 2 ![2022_06_11_image.png](https://cdn.logseq.com/%2Fc5083927-5c94-4c57-a16c-c5b7d0d4472fdc2aa855-0b53-4198-932a-cfa019c0d6b32022_06_11_image.png?Expires=4808568555&Signature=ZJwJljG2UAe9kt9~SG-brL3CNmZQVKk7YWAa2lVfv-z3YcdZGwrFoeCRKnBhMuPyB-K66w1hg6ogAcftJ5zHWfimQ2sLh6iixL7HmWrr87RnoYfCZuAqm6lDftBaF4YrPKv~FPuifZUeqg0ISFIX~1b-h0bjuExG2duocJE455FWgT0Tu-PJ7qfRnMxWOsXvoTbxOSS~-v~s-5aZT3wT~BFvTtVPcEVmg~bs0xG0GNMO21mTHnviPh8G7I73W8nQrPp5D~t0Ka2tk4pcvmJb2BT4sUC5liuRlxLSpRuPeOpFbo0rhjIZxSPOjJG0ULa4J~pgjCkkCD53pdtUznX8DQ__&Key-Pair-Id=APKAJE5CCD6X7MP6PTEA)
			- #+BEGIN_NOTE
			  In java by default zero in initial value of array elements . 
			  #+END_NOTE
			-
			- ^^fill ( array_name , array_name + k , Value_to_be filled);^^
		- ### SubArray
			- Brute Force -> Do nested for loop and check Each and every sub array
			- ^^Total Number of Subarrays are always =^^
			  \begin{equation}
			  n \dfrac{  \left( n+1  \right)    }{ 2  }   
			  \end{equation}
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
		- #### Remove duplicates from sorted array
			- **Brute Force Approach** 
			  1. Create an auxiliary array temp[] to store unique elements . 
			  2. Traverse input array and one by one copy unique elements of arr[] to 
			  temp[]. Also keep track of count of unique elements. Let this count be **j**.
			  3. Copy **j** elements from temp[] to arr[] and return j
			  4. Time Complexity => O(nlogn)
			- **2-Pointer Approach**
			  1. Firstly we initialize two pointers i and j 
			  2. j pointer will move till we find an element difference from element at the ith position , once we find that element we will increase our ith pointer and make the ith element same as the jth element . and we will do this till j the pointer reaches the end of the array .
			  3. Time Complexity => O(n)
			  ```
			  int removeDuplicates(vector<int>& nums) {
			          if(nums.size() == 0){
			              return 0;
			          }
			          int i = 0;
			          for(int j = 1 ; j<nums.size() ; j++){
			              if(nums[i] != nums[j]){
			                  i++;
			                  nums[i] = nums[j];
			              }
			          }
			          return i+1;
			      }
			  ```
		- #### Rotate Array
			- **Not Brute Force** : 
			  1. First we will rotate the whole array once , 
			  2. Rotate array from 0 to k -1 position . 
			  3. Rotate array from k to last index 
			  4. The result will be sorted array 
			  ```
			  void rotate(vector<int>& nums, int k) {
			          k = k%nums.size();
			          reverse(nums,0,nums.size() -1);
			          reverse(nums, 0 , k-1);
			          reverse(nums,k,nums.size() -1);
			      }
			      void reverse(vector<int>& nums , int start , int end ){
			          while(start < end){
			              int temp = nums[start];
			              nums[start] = nums[end];
			              nums[end] = temp;
			              start++;
			              end--;
			          }
			      }
			  ```
- ### Array Pre-Processing
	- ####  Rain Water traping problem ( LeetCode )
		- In this problem we will be making two auxiliary array left and right 
		  left will store the maximum height till the ith element from the left in the auxiliary array , the right array will store the maximum height till the ith element from the right in the new auxiliary array .
	- #### Kadane's Algorithm
		- ^^Maximum Subarray Sum^^
		- #+BEGIN_IMPORTANT
		  If you want to find the maximum sub array with the ^^brute force^^ method then , the simplest approach will be finding all the subarrays first . 
		  ^^Time Complexity = O(n^2)^^
		  #+END_IMPORTANT
		- The second approach is ^^Kadane's algorithm^^  in which we will first maintain the sum till the ith element and if currsum > maxsum then we assign max sum = currsum and if currsum becomes negative then we reinitialize it with 0 . 
		  ```
		  int maxSubArray(vector<int>& nums) {
		          int maxSum = nums[0];
		          int currSum = 0;
		          for(int i = 0 ; i<nums.size() ; i++){
		              currSum = currSum + nums[i];
		              if(currSum > maxSum ){
		                  maxSum = currSum ;
		              }
		              if ( currSum < 0){
		                   currSum = 0;
		              }
		          }
		          return maxSum;
		      }
		  ```
	- #### Intersection of Two Arrays II
		- **Apporach :** First we will create an empty vector , an unordered_map  of int  int , then we wil just iterate over the first vector given and increase the key value pair as we iterate  . 
		  Then we will iterate over the other vector num2 and if the count of any key in the map is greater then zero  i.e the element has occured more than once in the first array so we just add that that element into our ans vector and reduce its count from the map . 
		  ^^Time Complexity : O(n)^^
		  **Code :** 
		  ```
		  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		          vector<int> ans;
		          unordered_map<int,int> map;
		          for(auto num : nums1){
		              map[num]++;
		          }
		          for(auto num : nums2){
		              if(map[num]>0){
		                  ans.push_back(num);
		                  map[num]--;
		              }
		          }
		          return ans;
		      }
		  ```
	- #### Move Zeros
		- **Approach :** First we will create two pointer left and right . 
		  Then we will traverse the  array , if 0 is found at arr[right] then we just increment right . 
		  Otherwise we will just swap left and right index and increment both left and right . 
		  **Code :**
		  ```
		  void moveZeroes(vector<int>& nums) {
		          int n = nums.size() ;
		          if(n== 0 || n == 1){
		              return ;
		          }
		          int left = 0 , right = 0 ;
		          int temp ; 
		          while(right < n){
		              if(nums[right] == 0){
		                  right++;
		              }
		              else{
		                  temp = nums[left];
		                  nums[left]=nums[right];
		                  nums[right]=temp;
		                  left++;
		                  right++;
		              }
		          }
		      }
		  ```
	-