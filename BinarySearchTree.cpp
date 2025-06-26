#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr;  // iniatialize left child to null
        rightchild = nullptr; // initialize rifht child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initializing ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

     // Step 1: Allocate memory for the new node
     Node *newNode = new Node();

    // step 2: Assign value to the data field of the node
    newNode->info = x;

     // Step 3: Make the left and right child of the new node point to NULL
     newNode->leftchild = nullptr;
     newNode->rightchild = nullptr;
 
    // Step 4: Locate the node withch will be the parent of the node to be inserted
    Node *parent = nullptr;
    Node *currentNode = nullptr;
    search(x, parent, currentNode);

    }
};