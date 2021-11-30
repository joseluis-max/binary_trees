# Binary_trees
- **What is a binary tree**
    
    In computer science, a **tree** is a widely used abstract data type that simulates a hierarchical tree structure, with a root value and subtrees of children with a parent node, represented as a set of linked nodes.
    
    In computer science, a **binary tree** is a tree data structure in which each node has at most two children, which are referred to as the *left child* and the *right child*.
    
- **What is the difference between a binary tree and a Binary Search Tree**
    
    Binary Search tree exhibits a special behavior. A node's left child must have a value less than its parent's value and the node's right child must have a value greater than its parent value.
    
- **What is the possible gain in terms of time complexity compared to linked lists**
    
    Have less time complexity in Access and Search in average cases.
    
- **What are the depth, the height, the size of a binary tree**
    
    properties of a *node*:
    
    - The **depth** of a node is the number of edges from the node to the tree's root node.A root node will have a depth of 0.
    - The **height** of a node is the number of edges on the *longest path* from the node to a leaf.A leaf node will have a height of 0.
    
    Properties of a *tree*:
    
    - The **height** of a tree would be the height of its root node,or equivalently, the depth of its deepest node.
    - The **diameter** (or **width**) of a tree is the number of *nodes* on the longest path between any two leaf nodes. The tree below has a diameter of 6 nodes.
    - The **size** of a binary tree is the total number of nodes in that tree.
    
    ![Properties binary tree](https://i.stack.imgur.com/8yPi9.png)
    
- **What are the different traversal methods to go through a binary tree**
    
    `In-order` the left subtree is visited first, then the root and later the right sub-tree.
    
    `Pre-order` the root node is visited first, then the left subtree and finally the right subtree.
    
    `Post-order`the root node is visited last, hence the name. First we traverse the left subtree, then the right subtree and finally the root node.
    
- **What is a complete, a full, a perfect, a balanced binary tree**
    
    A **rooted** binary [tree](https://en.wikipedia.org/wiki/Tree_data_structure) has a [root node](https://en.wikipedia.org/wiki/Root_node) and every node has at most two children.
    
    A **full** binary tree is a tree in which every node has either 0 or 2 children.
    
    In a **complete** binary tree every level, *except possibly the last*, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2*h* nodes at the last level *h*.
    
    A **perfect** binary tree is a binary tree in which all interior nodes have two children *and* all leaves have the same *depth* or same *level*.
    
    A **balanced** binary tree is a binary tree structure in which the left and right subtrees of every node differ in height by no more than 1.
    
    ![Type of binary trees](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Ftse3.mm.bing.net%2Fth%3Fid%3DOIP.u4MZX1a4M_o7YI9qX_OihQHaFm%26pid%3DApi&f=1)
