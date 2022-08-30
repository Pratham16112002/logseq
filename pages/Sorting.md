- #### Bubble Sort
	- It is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order . This algorithm is not suitable for larger data set because its time complexity is quite high . 
	  ```
	  #include <iostream>
	  #include <type_traits>
	  
	  void bubblesort(int arr[], int n) {
	    for (int i = 0; i < n - 1; i++) {
	      for (int j = 0; j < n - i - 1; j++) {
	        if (arr[j] > arr[j + 1]) {
	          int temp = arr[j];
	          arr[j] = arr[j + 1];
	          arr[j + 1] = temp;
	        }
	      }
	    }
	  }
	  
	  int main(int argc, char *argv[]) {
	    std::cout << "Please enter size of the array" << std::endl;
	    int n;
	    std::cin >> n;
	    int arr[n];
	    std::cout << "Enter the elements of array" << std::endl;
	    for (int i = 0; i < n; i++) {
	      std::cin >> arr[i];
	    }
	    bubblesort(arr, n);
	    std::cout << "After Sorting the array" << std::endl;
	    for (int i = 0; i < n; i++) {
	      std::cout << arr[i] << std::endl;
	    }
	  
	    return 0;
	  }
	  ```
- #### Insertion Sort
	- **Insertion sort** is a simple sorting algorithm that works
	   similar to the way you sort playing cards in your hands. The array is 
	  virtually split into a sorted and an unsorted part. Values from the 
	  unsorted part are picked and placed at the correct position in the 
	  sorted part.
	  **Characteristics of Insertion Sort**
	  1. This algorithm is one of the simple implementation .
	  2. This algorithm is efficient for small data values .
	  3. it is appropriate for data values which are already sorted .
	-