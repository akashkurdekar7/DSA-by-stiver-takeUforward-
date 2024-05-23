#include <iostream>
using namespace std;

/************************************************************
Following is the TreeNode class structure
************************************************************/
template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int sumOfLeftLeaves(TreeNode<int> *root)
{
    // Base case: If root is NULL, return 0
    if (!root)
        return 0;

    int sum = 0;

    // If the left child of the root exists and is a leaf node, add its value to the sum
    if (root->left && !root->left->left && !root->left->right)
    {
        sum += root->left->val;
    }

    // Recursively calculate sum of left leaves in the left and right subtrees
    sum += sumOfLeftLeaves(root->left);
    sum += sumOfLeftLeaves(root->right);

    return sum;
}

int main()
{
    // Example usage: Creating a binary tree and finding the sum of left leaves

    // Constructing the binary tree from the example
    TreeNode<int> *root = new TreeNode<int>(3);
    root->left = new TreeNode<int>(9);
    root->right = new TreeNode<int>(20);
    root->right->left = new TreeNode<int>(15);
    root->right->right = new TreeNode<int>(7);

    // Finding the sum of left leaves
    int leftLeavesSum = sumOfLeftLeaves(root);
    cout << "Sum of left leaves: " << leftLeavesSum << endl;

    // Clean up memory (optional)
    delete root->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
