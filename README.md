# Data-Structure-Algorithm
1. Single Linked List

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
  * Deletion from end (`pop_back`): $O(n)$ (traversal needed to find previous node)
  * Traversal/Print (`printLL`): $O(n)$
---
* **2. Doubly Linked List**
  * **Question Description:** Implement a Doubly Linked List class supporting fundamental operations such as insertion at the front (`push_front`), insertion at the end (`push_back`), deletion by value (`pop_val`), deletion by index (`pop_idx`), deletion from the front (`pop_front`), deletion from the back (`pop_back`), and traversal/printing of elements (`print`).
  * **Test Cases:**
    * **Test Case 1:** Insert elements `1`, `2` at the front and `3`, `4` at the back.
      * **Input Sequence:** `push_front(1)`, `push_front(2)`, `push_back(3)`, `push_back(4)`
      * **Expected Output:** `2 1 3 4`
    * **Test Case 2:** Deleting a specific value from the list.
      * **Expected Output (after `pop_val(3)`):** `2 1 4`
    * **Test Case 3:** Deleting a node at a specific index.
      * **Expected Output (after `pop_idx(1)`):** `2 4`
  * **Time Complexity:**
    * Insertion at front (`push_front`): $O(1)$
    * Insertion at end (`push_back`): $O(n)$ (traversal needed to find the tail node)
    * Deletion from front (`pop_front`): $O(1)$
    * Deletion from end (`pop_back`): $O(n)$ (traversal needed to find the last node)
    * Deletion by value (`pop_val`) / index (`pop_idx`): $O(n)$ (traversal needed to find the target node)
    * Traversal/Print (`print`): $O(n)$

---

* **3. Circular Queue**
  * **Question Description:** Implement a Circular Queue class using a linked list structure supporting element insertion (`enqueue`), element removal (`dequeue`), and circular queue traversal/printing (`print`).
  * **Test Cases:**
    * **Test Case 1:** Enqueue elements `1`, `2`, `3`, `4`, `5`.
      * **Input Sequence:** `enqueue(1)`, `enqueue(2)`, `enqueue(3)`, `enqueue(4)`, `enqueue(5)`
      * **Expected Output:** `Queue elements: 1 2 3 4 5`
    * **Test Case 2:** Dequeue elements from the queue.
      * **Expected Output (after two `dequeue()` operations):** `Queue elements: 3 4 5`
  * **Time Complexity:**
    * Enqueue (`enqueue`): $O(1)$ (using a tail pointer)
    * Dequeue (`dequeue`): $O(1)$
    * Traversal/Print (`print`): $O(n)$

---

* **4. Heap Sort**
  * **Question Description:** Implement Heap Sort using a max-heap approach via helper functions `maxheapify`, `buildheap`, and `HeapSort` to sort an array in ascending order.
  * **Test Cases:**
    * **Test Case 1:** Sort an unsorted array of numbers.
      * **Input Sequence:** `arr[] = {12, 11, 13, 5, 6, 7}`
      * **Expected Output (Sorted array):** `5 6 7 11 12 13`
  * **Time Complexity:**
    * Max Heapify (`maxheapify`): $O(\log n)$
    * Build Heap (`buildheap`): $O(n)$
    * Heap Sort (`HeapSort`): $O(n \log n)$

---

* **5. Binary Search Tree (BST) with Parent Pointers**
  * **Question Description:** Implement a Binary Search Tree supporting node insertion with parent tracking (`insertBST`), multiple element creation (`CreateBST`), searching (`BinarySearch`), deletion of nodes handling all child cases (`Delete`), and inorder traversal (`inorder`).
  * **Test Cases:**
    * **Test Case 1:** Create a BST from a vector of elements and perform an inorder traversal.
      * **Input Sequence:** `elements = {50, 30, 70, 20, 40, 60, 80}`
      * **Expected Output:** `20 30 40 50 60 70 80`
    * **Test Case 2:** Delete a node with no children (`20`).
      * **Expected Output (after `Delete(root, 20)`):** `30 40 50 60 70 80`
    * **Test Case 3:** Delete a node with two children (`30`).
      * **Expected Output (after `Delete(root, 30)`):** `40 50 60 70 80`
  * **Time Complexity:**
    * Search (`BinarySearch`): $O(h)$ (where $h$ is the height of the tree; $O(\log n)$ for balanced BST)
    * Insertion (`insertBST`): $O(h)$
    * Deletion (`Delete`): $O(h)$
    * Traversal (`inorder`): $O(n)$

---

* **6. Parenthesis Matching**
  * **Question Description:** Implement a function to check whether a given string contains balanced matching parentheses, curly braces, and square brackets using the Standard Template Library stack.
  * **Test Cases:**
    * **Test Case 1:** Check a balanced expression.
      * **Input Sequence:** `expr = "{[()]}"`
      * **Expected Output:** `Balanced`
    * **Test Case 2:** Check an unbalanced expression.
      * **Input Sequence:** `expr = "([)]"`
      * **Expected Output:** `Not Balanced`
  * **Time Complexity:**
    * Parenthesis Match (`Paran_Match`): $O(n)$ (where $n$ is the length of the string)

---

* *7. Tower of Hanoi**
  * **Question Description:** Implement a recursive solution to solve the classic Tower of Hanoi puzzle, moving a given number of disks from a source rod to a destination rod using an auxiliary rod.
  * **Test Cases:**
    * **Test Case 1:** Move 3 disks from source `A` to destination `C` using auxiliary `B`.
      * **Input Sequence:** `TowerofHanoi(3, 'A', 'B', 'C')`
      * **Expected Output:** 
        ```text
        Move disk 1 from A to C
        Move disk 2 from A to B
        Move disk 1 from C to B
        Move disk 3 from A to C
        Move disk 1 from B to A
        Move disk 2 from B to C
        Move disk 1 from A to C
        ```
  * **Time Complexity:**
    * Tower of Hanoi (`TowerofHanoi`): $O(2^n)$

 * **8. Stack with Array**
  * **Question Description:** Implement a Stack data structure using a fixed-size array supporting push operations (`push`) and pop operations (`pop`) with stack overflow and underflow checks[cite: 4].
  * **Test Cases:**
    * **Test Case 1:** Push elements onto the stack and pop them[cite: 4].
      * **Input Sequence:** `push(11)`, `push(22)`, `push(33)`, `push(44)`, followed by three `pop()` operations[cite: 4]
      * **Expected Output:** 
        ```text
        poped:44
        poped:33
        poped:22
        ```
  * **Time Complexity:**
    * Push (`push`): $O(1)$[cite: 4]
    * Pop (`pop`): $O(1)$[cite: 4]

---

* **9. Stack with Linked List**
  * **Question Description:** Implement a Stack data structure using a singly linked list supporting dynamic push operations (`push`) and pop operations (`pop`) from the top[cite: 5].
  * **Test Cases:**
    * **Test Case 1:** Push elements onto the linked list stack and pop them[cite: 5].
      * **Input Sequence:** `push(11)`, `push(22)`, `push(33)`, `push(44)`, followed by three `pop()` operations[cite: 5]
      * **Expected Output:** 
        ```text
        poped:44
        poped:33
        poped:22
        ```
  * **Time Complexity:**
    * Push (`push`): $O(1)$[cite: 5]
    * Pop (`pop`): $O(1)$[cite: 5]

---

* **10. Queue with Array**
  * **Question Description:** Implement a Queue data structure using a fixed-size array supporting enqueue (`enqueue`) and dequeue (`dequeue`) operations with overflow and underflow management[cite: 6].
  * **Test Cases:**
    * **Test Case 1:** Enqueue elements into the queue and dequeue them[cite: 6].
      * **Input Sequence:** `enqueue(1)`, `enqueue(2)`, `enqueue(3)`, `enqueue(4)`, followed by two `dequeue()` operations[cite: 6]
      * **Expected Output:** 
        ```text
        dequeue:1
        dequeue:2
        ```
  * **Time Complexity:**
    * Enqueue (`enqueue`): $O(1)$[cite: 6]
    * Dequeue (`dequeue`): $O(1)$[cite: 6]

---

* **11. Queue with Linked List**
  * **Question Description:** Implement a Queue data structure using a singly linked list supporting element insertion at the end (`enqueue`), element deletion from the front (`dequeue`), and traversal/printing (`print`)[cite: 7].
  * **Test Cases:**
    * **Test Case 1:** Enqueue elements from an array, print the queue, and perform dequeues[cite: 7].
      * **Input Sequence:** Enqueue elements `{1, 2, 3, 4, 5, 6, 77}`, call `print()`, then perform two `dequeue()` calls[cite: 7]
      * **Expected Output:** 
        ```text
        1 enueued 
        2 enueued 
        3 enueued 
        4 enueued 
        5 enueued 
        6 enueued 
        77 enueued 
        1 2 3 4 5 6 77 1 Dequeued 
        2 Dequeued 
        ```
  * **Time Complexity:**
    * Enqueue (`enqueue`): $O(n)$ (traverses to the tail node)[cite: 7]
    * Dequeue (`dequeue`): $O(1)$[cite: 7]
    * Traversal/Print (`print`): $O(n)$[cite: 7]

---

* **12. Merge Sort**
  * **Question Description:** Implement Merge Sort using a divide-and-conquer strategy via recursive partitioning and a helper merge function to sort a vector of integers in ascending order[cite: 8].
  * **Test Cases:**
    * **Test Case 1:** Sort an unsorted vector of elements[cite: 8].
      * **Input Sequence:** `vec = {12, 31, 35, 8, 17, 32}`[cite: 8]
      * **Expected Output (Sorted vector):** `8 12 17 31 32 35`[cite: 8]
  * **Time Complexity:**
    * Merge Sort (`recursive` / `merge`): $O(n \log n)$[cite: 8]

---

* **13. Quick Sort**
  * **Question Description:** Implement Quick Sort using a partitioning scheme (`Partition`) to recursively sort a vector of integers around a pivot element[cite: 9].
  * **Test Cases:**
    * **Test Case 1:** Sort an unsorted vector of integers[cite: 9].
      * **Input Sequence:** `vec = {9, 3, 7, 5, 6, 2, 8, 4, 1}`[cite: 9]
      * **Expected Output (Sorted vector):** `1 2 3 4 5 6 7 8 9`[cite: 9]
  * **Time Complexity:**
    * Quick Sort (Average/Best Case): $O(n \log n)$[cite: 9]
    * Quick Sort (Worst Case): $O(n^2)$[cite: 9]

---

* **14. Radix Sort**
  * **Question Description:** Implement Radix Sort utilizing a stable digit-by-digit counting sort helper (`count_sort`) to sort a vector of non-negative integers[cite: 10].
  * **Test Cases:**
    * **Test Case 1:** Sort an array of multi-digit numbers[cite: 10].
      * **Input Sequence:** `vec = {253, 192, 3, 2, 10, 75, 478, 88}`[cite: 10]
      * **Expected Output (Sorted vector):** `2 3 10 75 88 192 253 478`[cite: 10]
  * **Time Complexity:**
    * Radix Sort (`radix_sort`): $O(d \cdot (n + k))$ (where $d$ is the number of digits, $n$ is the number of elements, and $k$ is the base of the number system)[cite: 10]

---

* **15. Binary Tree**
  * **Question Description:** Implement a basic Binary Tree structure with parent pointers supporting interactive node creation (`Binarytree`) and recursive inorder traversal (`inorder`)[cite: 11].
  * **Test Cases:**
    * **Test Case 1:** Build a binary tree interactively and print its inorder traversal[cite: 11].
      * **Input Sequence:** Dynamic runtime input for node data and child flags (`l`, `r`) starting from a root node[cite: 11]
      * **Expected Output:** Inorder traversal sequence corresponding to the constructed tree structure[cite: 11]
  * **Time Complexity:**
    * Traversal (`inorder`): $O(n)$[cite: 11]
    * Tree Construction (`Binarytree`): $O(n)$[cite: 11]

---

* **16. AVL Tree**
  * **Question Description:** Implement a self-balancing Binary Search Tree (AVL Tree) supporting balance factor tracking, tree rotations (`right_rotate`, `left_rotate`), node balancing (`balance`), insertion (`insert`), and inorder traversal (`inorder_traverse`)[cite: 12].
  * **Test Cases:**
    * **Test Case 1:** Insert a sequence of elements into the AVL tree and perform an inorder traversal[cite: 12].
      * **Input Sequence:** `arr = {12, 34, 26, 13, 54}`[cite: 12]
      * **Expected Output (Sorted order due to BST property):** `12 13 26 34 54`[cite: 12]
  * **Time Complexity:**
    * Insertion (`insert` with balancing): $O(\log n)$[cite: 12]
    * Rotations (`right_rotate` / `left_rotate`): $O(1)$[cite: 12]
    * Traversal (`inorder_traverse`): $O(n)$[cite: 12]
