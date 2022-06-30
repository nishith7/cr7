#include<bits/stdc++.h>

using namespace std;

class Node{
    public: 
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data = d;
    }
};

// Node * buildTree(){
//     int d;
//     cin>>d;

//     if(d==-1){
//         return NULL;
//     }
//     Node *n = new Node(d);
//     n->left = buildTree();
//     n->right = buildTree();

//     return n;

// }

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

Node* levelorderbuild(){
    int d;
    cin>>d;

    Node* root = new Node(d);
    queue <Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        int c_left,c_right;
        cin>>c_left>>c_right;

        if(c_left!=-1){
            curr->left = new Node(c_left);
            q.push(curr->left);
        }
        if(c_right!=-1){
            curr->right = new Node(c_right);
            q.push(curr->right);
        }
    }
    return root;
}

int main(){
    Node* root = levelorderbuild();
    levelorder(root);

    return 0;

}