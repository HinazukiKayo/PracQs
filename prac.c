/* What Alex thinks will be in the prac exam.

I've laballed the likelihood the question is going to appear in the exam and also the time you should be able to do it in 

Unlikely = skippable but do it because its a good exercise.
Normal  = It can be asked
Likely  = It has a good chance to be asked if it's a good question.
Extremely likely = YOU MUST LEARN TO DO THIS BEFORE HEADING IN THE EXAM.

*/


// 1. Given a BST print out all the nodes in preorder, inorder and postorder traversal. [Hint: Recursion will be easier.] (Extremely likely/ <2 mins)

void preorder (Tree t);
void inorder (Tree t);
void postorder (Tree t);

// 2. Given an integer linked list convert it into a BST. (Normal - likely/ < 10 mins)

Tree listToBst (Link list);

// 3. Implement depth-first search on a given graph using recursion (also do it without recursion). (Unlikely)

void depthFirstSearch(Graph g);

// 4. Implement breadth-first search on a given graph using recursion (also do it without recursion). (Unlikely)

void breadthFirstSearch(Graph g);

// 5. Given an BST of integers and an integer, insert the integer into the BST (Likely)

// 6. Write a function int isBST(Tree t) that determines whether a given "BST" preserves the properties of a BST.
// That is whether the given tree is a valid BST. Return 1 if true 0 if false. (Likely)

// Find the depth of a BST. The depth is defined to be the largest path from the root of the tree to the leaf. (Unlikely -- too easy/ < 1 min)

int depth (Tree tree);

// 7. Determine if a BST is balanced or not.

int isBalanced (Tree tree);

// 8. Given a BST and an element delete all occurence of that element in the tree. (Very unlikely but a good exercise/ < 20 mins)

Tree deleteElement (Tree tree);


// 9. Given a BST delete the largest delete the largest integer in the tree and return the resulting tree
// You must free the memory of the node that is deleted.
// If the tree is empty simply return the empty tree.
// For simplicity you may assume theres no duplicates. (Normal/ < 5 mins)

Tree deleteLargest (Tree tree);


// Given an graph and a path (The path is defined by an edges array). Determine if this path is Eulerian.
// We need this function to pass in nE. Why? (Hint: It's to do with how functions "pass arrays")
// (Normal/ < 5 mins)

int isEulerPath(Graph g, Edge e[], int nE);





/* 2016 Prac predictions */






/* Interview questions. Probably not going to be tested by very useful. */

//Implement a function that reflects a BST. For example

//              6                 6 
//             / \               / \
//            4   9             9   4
//           / \ / \           / \  /\
//          3  5 7  10        10 7 5  3

//           Original          Reflected


Tree reflectBST (Tree tree);