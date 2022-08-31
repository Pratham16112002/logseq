- A Linked list is a Data Structure that represents a  sequence of nodes . In a singly linked list , each node points to the next node in the linked list . A doubly linked list gives each node pointers to both the next node and the previous node . ![image.png](../assets/image_1661105408405_0.png)
- Linked list does not provide constant time access to a particular "index" within the list . This means that if you'd like to find the kth element int the list you will need to iterate through k elements .
- #### Creating a Linked List
	- ![image.png](../assets/image_1661106886251_0.png)
- #### Inserting a Node in the linked List
	- ![image.png](../assets/image_1661106983491_0.png)
	  To Display Linked List ![image.png](../assets/image_1661107045662_0.png)
- #### Remove Duplicates from linked list
	- First approach will be brute force approach in which we will run two loops  , the second loop will check if any duplicate value is present in the rest of the linked list when a specific element is selected from the first loop .
	  ![image.png](../assets/image_1661401398688_0.png)
- #### Sort Linked list using merge sort
	- [Problem Link](https://leetcode.com/problems/sort-list/submissions/)
	  1. In this problem we will do slow and fast pointer approach to find the middle of the linked list and then we will pass the left and right part of the linked list to the merge function which is ![image.png](../assets/image_1661441547633_0.png)
- #### Remove the nth node from the linked list
	- 1. First we will create a dummy node and store head in it .
	  2. We will create two pointers slow and fast equal to the dummy node 
	  3. ^^fast = fast->next^^ till n+1 so that fast pointer reaches first , [] 
	  4. Do while loop till fast is not null , and then do slow = slow->next , fast = fast->next . 
	  5. Then we have got the reference the node , simply we will point the **slow->next = slow->next->next** and return our dummy_head->next; 
	  **Code :** \darr
	  ```
	    ListNode* removeNthFromEnd(ListNode* head, int n) {
	          ListNode* dummy_node = new ListNode(0);
	          dummy_node->next = head;
	          ListNode* fast = dummy_node;
	          ListNode* slow = dummy_node;
	          for(int i = 1 ; i<= n+1 ; i++){
	              fast = fast->next;
	          }
	          while(fast!=NULL ){
	              fast = fast->next;
	              slow=slow->next;
	          }
	          slow->next = slow->next->next;
	          return dummy_node->next;
	      }
	  ```
-