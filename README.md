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
