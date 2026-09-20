---
source: 'docs/semester_2/model_questions.md'
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"><rect width="18" height="18" x="3" y="3" rx="2"/><path d="M7 8h8"/><path d="M7 12h10"/><path d="M7 16h6"/></svg> Model Questions: Data Structures (with C/C++)'
---

# Model Questions: Data Structures (with C/C++)
### Paper Code: CMSDSC202T (NEP, WBSU — Sem 2)

---

::: info How to use this file
This is a **sure-shot / high-priority** list only — not exhaustive like the Sem 1 file.
It is built directly on top of the [Sem 2 DSA notes (N01–N13)](../download) — read those PDFs alongside this.
Focus on these first; if time remains, expand into the full notes.
:::

## Unit 1 — Introduction, ADT & Complexity

**Q1.** What is a data structure? Differentiate between **linear** and **non-linear** data structures with examples. Also differentiate between **primitive** and **non-primitive** data structures.

**Q2.** What is an **Abstract Data Type (ADT)**? Explain with the example of the Stack ADT (operations only, no implementation).

**Q3.** Explain **time complexity** and **space complexity**. What is asymptotic notation? Explain Big-O, Big-Ω, and Big-θ with simple examples. Find the time complexity of a nested loop that runs `n` times outer and `n` times inner.

**Q4.** Differentiate between **best case, average case, and worst case** complexity with an example (e.g., linear search).


## Unit 2 — Arrays

**Q5.** What is an array? Explain how a 1-D array is stored in memory. Derive the address calculation formula for the `i`-th element of a 1-D array.

**Q6.** Explain **row-major** and **column-major** order for storing a 2-D array. Derive the address formula for an element `A[i][j]` in both cases.

**Q7.** What is a **sparse matrix**? Why do we need special representation for it? Explain the triplet (3-tuple) representation of a sparse matrix with an example.

**Q8.** Write an algorithm/program to **insert** an element at a given position and **delete** an element from a given position in an array. What is the time complexity of each?

**Q9.** Explain **Linear Search** and **Binary Search** algorithms with example and code. Derive their time complexities. Why does binary search require a sorted array?

**Q10.** What is a **Circular Array**? Why is it needed? Explain how insertion and deletion are done in a circular array.

**Q11.** Write short notes on any two sorting algorithms among **Bubble Sort, Selection Sort, Insertion Sort** — algorithm, dry run on an example array, and time complexity (best/worst/average).

**Q11a.** Give Knuth's definition of a data structure (as covered in note N01). Classify the following into Linear / Non-Linear / Multi-linked / Dynamic structures: Array, Tree, Doubly Linked List, Stack, Graph, Memory Management structures.


## Unit 3 — Linked List

**Q12.** What is a linked list? Compare **array vs linked list** (memory, insertion/deletion, access time, static/dynamic).

**Q13.** Explain the structure of a **singly linked list** node. Write an algorithm/program to **insert a node** at (a) the beginning, (b) the end, (c) a given position of a singly linked list.

**Q14.** Write an algorithm/program to **delete a node** from (a) the beginning, (b) the end, (c) a given position of a singly linked list.

**Q15.** Write an algorithm to **reverse a singly linked list** (iterative). Explain each step with a diagram.

**Q16.** What is a **doubly linked list**? Explain its node structure. Write insertion and deletion algorithms for a doubly linked list.

**Q17.** What is a **circular linked list**? How does it differ from a singly linked list? What is one practical application of a circular linked list?

**Q18.** Write an algorithm/program to **search for an element** and to **count the number of nodes** in a singly linked list.

**Q19.** Explain how a **polynomial** can be represented and added using linked lists.

**Q19a.** Write the C++ **node structure** and the `Chain<T>` class outline for a template-based singly linked list (data field + `link`/`next` pointer field). Using this, write the `Length()`, `Find(k, x)`, `Insert(k, x)`, and `Delete(k, x)` member functions, explaining the special handling needed when `k = 0` (inserting/deleting at the head).


## Unit 4 — Stack

**Q20.** What is a stack? Explain the **LIFO** principle. List all stack operations (`push`, `pop`, `peek/top`, `isEmpty`, `isFull`) with their algorithms using an array.

**Q21.** Implement a **stack using a linked list**. Write `push()` and `pop()` operations. Why is a linked-list stack preferred over an array-based stack in some cases?

**Q22.** What is **infix, postfix (Reverse Polish), and prefix** notation? Convert the following infix expression to postfix using the stack-based algorithm (show step-by-step stack contents): `(A + B) * (C - D) / E`.

**Q23.** Write the algorithm to **evaluate a postfix expression** using a stack. Evaluate: `5 6 2 + * 12 4 /  -` showing the stack at each step.

**Q24.** Explain how a stack is used to check for **balanced parentheses** in an expression. Write the algorithm.

**Q25.** Explain the application of stack in **recursion** (function call stack) and in **reversing a string**.

**Q25a.** Write a `Stack<T>` class (array-based, using `push`, `pop`, `top`, `isEmpty`) and use it to solve **any two** of the following practice problems from your notes: (a) reverse a string using a stack, (b) check balanced parentheses, (c) design a `MinStack` that supports `GetMin()` in O(1), (d) check for redundant brackets in an expression, (e) sort a stack using another stack (or recursively).

**Q25b.** Explain how a **stack can be implemented using two queues**, and conversely how a **queue can be implemented using two stacks**. Write the `Push`/`Pop` (or `Enqueue`/`Dequeue`) logic for one of these conversions.


## Unit 5 — Queue

**Q26.** What is a queue? Explain the **FIFO** principle. List all queue operations (`enqueue`, `dequeue`, `front`, `rear`, `isEmpty`, `isFull`) using an array.

**Q27.** What is the **"false overflow"** problem in a linear (array-based) queue? How is a **circular queue** used to solve it? Write the enqueue/dequeue algorithm for a circular queue.

**Q28.** Implement a **queue using a linked list**. Write `enqueue()` and `dequeue()` operations.

**Q29.** What is a **Deque (double-ended queue)**? Differentiate between input-restricted and output-restricted deque.

**Q30.** What is a **priority queue**? Give one real-life application. How is it different from a normal queue?

**Q31.** Explain how a queue can be implemented using **two stacks** (or vice versa) — write the algorithm.

**Q31a.** Compare the time complexity of `Insert`, `DeleteMax`, and `Max` operations on a priority queue implemented as: (a) an **unordered array**, (b) an **ordered array**, (c) a **binary heap**. Write the `HeapifyUp` and `HeapifyDown` functions for a max-heap-based priority queue.

**Q31b.** Write an algorithm/program to check whether a queue is a **palindrome** (using an auxiliary stack), and to **interleave the first and second halves** of a queue.


## Unit 6 — Recursion

**Q32.** What is recursion? Differentiate between **direct and indirect recursion**, and between **tail recursion and non-tail (general) recursion** with examples.

**Q33.** Write a recursive algorithm/program to compute **factorial of n** and trace the recursion tree / stack for `n = 5`.

**Q34.** Write a recursive algorithm/program for the **Fibonacci series**. Draw the recursion tree for `n = 5` and comment on its time complexity.

**Q35.** Write a recursive algorithm/program to find the **GCD of two numbers** (Euclidean algorithm) and to solve the **Tower of Hanoi** problem for `n` disks. State the recurrence relation and total number of moves for Tower of Hanoi.

**Q36.** Explain how recursion is internally implemented using a **stack** (activation records / stack frames). What are the advantages and disadvantages of recursion over iteration?

**Q36a.** Differentiate between **direct** and **indirect recursion** with a code example for each (e.g. a function `A()` calling `B()` which calls back into `A()`). List at least three **common mistakes** made while writing recursive functions (missing base case, wrong recursive relation, stack overflow from deep recursion).

**Q36b.** List at least four applications of recursion in data structures and algorithms (tree traversal, graph DFS, backtracking, divide-and-conquer such as Merge/Quick Sort). Write a recursive function to compute **xⁿ** (power) and to **reverse a linked list** recursively.


## Unit 7 — Trees (Binary Tree & BST)

**Q37.** Define **tree** and its terminologies: root, node, edge, parent, child, sibling, leaf, degree, depth, height, level.

**Q38.** What is a **binary tree**? Explain its types: full/strict, complete, perfect, skewed binary tree. What is the maximum number of nodes at level `i` and in a binary tree of height `h`?

**Q39.** Explain **array representation** and **linked representation** of a binary tree. For array representation, give the formulas to find parent/left-child/right-child index.

**Q40.** Explain and write algorithms for **Preorder, Inorder, and Postorder** tree traversal (recursive). Given a binary tree diagram, write its preorder, inorder, and postorder sequences.

**Q41.** Explain **Level-order traversal** (BFS) of a binary tree using a queue. Write the algorithm.

**Q42.** What is a **Binary Search Tree (BST)**? Write the algorithm to **insert** a node and to **search** for a key in a BST. What is the time complexity in the best and worst case?

**Q43.** Write the algorithm to **delete a node** from a BST. Explain all three cases: (a) leaf node, (b) node with one child, (c) node with two children.

**Q44.** Construct a BST by inserting the following keys in order: `50, 30, 70, 20, 40, 60, 80`. Show the tree after every insertion and give its inorder traversal.

**Q45.** What is a **threaded binary tree**? Why is it used? (short note)

**Q45a.** Write the **array-representation rules** for a binary tree (root at index 0; left child of `i` is `2i+1`; right child is `2i+2`; parent of `i` is `⌊(i-1)/2⌋`). Using these rules, write the recursive **Inorder, Preorder, and Postorder** traversal functions directly on the array (without converting to a linked tree).

**Q45b.** Write **iterative** (stack-based) algorithms for Preorder and Inorder traversal of a binary tree using its linked representation. Why is Postorder traversal harder to do iteratively than Preorder/Inorder? Explain the two-pointer/`lastVisited` technique used to solve it.

**Q45c.** Write recursive functions to: (a) **count total nodes**, (b) **count leaf nodes**, (c) compute the **height**, (d) check if **two binary trees are identical**, and (e) **validate whether a binary tree is a valid BST** (using a min/max range check).


## Quick Reference: Syllabus Unit Map

| Unit | Topics | Questions |
|------|--------|-----------|
| 1 | ADT, Complexity, Big-O, Knuth's classification | Q1–Q4, Q11a |
| 2 | Arrays, Sparse Matrix, Searching, Sorting | Q5–Q11 |
| 3 | Singly/Doubly/Circular Linked List, `Chain<T>` class | Q12–Q19, Q19a |
| 4 | Stack, Infix-Postfix-Prefix, Applications, MinStack | Q20–Q25, Q25a–Q25b |
| 5 | Queue, Circular Queue, Deque, Priority Queue (Heap) | Q26–Q31, Q31a–Q31b |
| 6 | Recursion, Direct/Indirect, Applications | Q32–Q36, Q36a–Q36b |
| 7 | Tree, Binary Tree, BST, Traversals (array + linked) | Q37–Q45, Q45a–Q45c |

---

::: tip Exam Strategy for me
- **Sure-shot 5-mark topics**: Array vs Linked List, Infix→Postfix conversion, Stack/Queue array implementation, BST insertion/deletion, Recursion trace (Factorial/Fibonacci/Tower of Hanoi).
- **Sure-shot 10–15 mark topics**: Linked list insertion/deletion (all positions), Postfix evaluation, Circular queue, BST full construction + traversal, Tower of Hanoi.
- Always draw diagrams for linked list operations and trees — most marks are lost for missing diagrams.
- Practice at least one full **dry run** (step-by-step) for: infix-to-postfix, postfix evaluation, and BST construction — these are asked almost every year.
:::
::: info Key Algorithms to Memorise (plase)
Binary Search · Bubble Sort · Singly Linked List insert/delete/reverse (`Chain<T>` style) · Stack push/pop (array + linked list) · Infix→Postfix conversion · Postfix evaluation · Balanced Parentheses check · MinStack (`GetMin` in O(1)) · Circular Queue enqueue/dequeue · Priority Queue via Binary Heap (`HeapifyUp`/`HeapifyDown`) · Factorial & Fibonacci recursion · Euclid's GCD · Tower of Hanoi · BST insert/search/delete · Tree traversals — recursive (array-based) and iterative stack-based (Pre/In/Post) + Level-order (queue-based) · Count nodes/leaves, height, IsBST validation
:::
