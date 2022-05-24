#include<bits/stdc++.h>

using namespace std;
/*
level order traversal::
1 2 3 4 5 6 7

        1
        2 3
        4 5 6 
        7
*/
class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data = d;
        left=right=NULL;
    }
};

Node * buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    Node * n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void levelorder(Node * root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);    
                        }
        }

    }
    return;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1+max(h1,h2);
}

int main(){
    Node* root = buildTree();

    cout<<"LEVEL ORDER::"<<endl;
    levelorder(root);

    cout<<"HEIGHT OF THE TREE:: "<<height(root);

    return 0;
}