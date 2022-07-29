#include<bits/stdc++.h>

using namespace std;

//TreeNode class definition

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->val = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};



int findMaxDepth(TreeNode<int> *root) 
{
	//Write your code here.  
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return 1+max(findMaxDepth(root->left),findMaxDepth(root->right));
    
}
