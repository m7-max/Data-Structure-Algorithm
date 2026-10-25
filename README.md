# Data-Structure-Algorithm
## 1. Single Linked List

* **Question Description:** Implement a Singly Linked List class or structure supporting fundamental operations such as insertion at the beginning (`push_front`), insertion at the end (`push_back`), deletion from the end (`pop_back`), and traversal/printing of elements (`printLL`).


* **Test Cases:**
* **Test Case 1:** Insert elements `1`, `2` at the front and `3`, `4` at the back.


* **Input Sequence:** `push_front(1)`, `push_front(2)`, `push_back(3)`, `push_back(4)`


* **Expected Output:** `2 1 3 4`




* **Test Case 2:** Deleting from the back after insertions.
* **Expected Output (after `pop_back`):** `2 1 3`






* **Time Complexity:**
* Insertion at front (`push_front`): $O(1)$


* Insertion at end (`push_back` with tail pointer): $O(1)$


* Deletion from end (`pop_back`): $O(n)$ (traversal needed to find the previous node)


* Traversal/Print (`printLL`): $O(n)$

