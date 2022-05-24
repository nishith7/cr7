#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
};

//Preorder build of the tree

Node * buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printpreorder(Node* root){            //preorder output: 1 2 4 5 7 3 6
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

void printinorder(Node * root){             //inorder:: 4 2 7 5 1 3 6
    if(root==NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}

void printpostorder(Node * root){            //postorder::4 7 5 2 6 3 1
    if(root==NULL){
        return;
    }
    printpostorder(root->left);
    printpostorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node * root = buildTree();
    cout<<"PREORDER:: ";
    printpreorder(root);
    cout<<endl;
    cout<<"INORDER:: ";
    printinorder(root);
    cout<<endl;
    cout<<"POSTORDER:: ";
    printpostorder(root);

    return 0;
}