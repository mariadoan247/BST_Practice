// BST_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node
{
public: 
    
    int SID = 0;

    Node* left = NULL;

    Node* right = NULL;

    Node* parent = NULL;
};

int depth()
{
    return 0;
}

void enumerate(Node* ptr)
{
    cout << ptr->SID << " ";

    if (ptr->left != NULL)
    {
        enumerate(ptr->left);
    }

    if (ptr->right != NULL)
    {
        enumerate(ptr->right);
    }
}

Node* Insert(Node* root, Node* x)
{
    if (root == NULL)
    {
        root = x;

        return root;
    }
    else
    {
        if (x->SID <+ root->SID)
        {
            root->left = Insert(root->left, x);
        }
        else
        {
            root->right = Insert(root->right, x);
        }
    }

    return root;
}

int main()
{
    Node x[5];

    x[0].SID = 11;
    x[1].SID = 7;
    x[2].SID = 26;
    x[3].SID = 8;
    x[4].SID = 18;

    Node* root = NULL;

    for (int i = 0; i < 5; ++i)
    {
        root = Insert(root, &x[i]);
    }

    enumerate(root);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
