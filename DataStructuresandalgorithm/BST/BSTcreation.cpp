#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int key;
    Node *left;
    Node *right;

    Node(int key){
        this->key = key;
        left = right = NULL;
    }
};

Node * insert(Node * root,int key){
    if(root==NULL){
        return new Node(key);
    }
    if(key<root->key){
        root->left = insert(root->left,key);
            }
    else{
        root->right = insert(root->right,key);
    }

    return root;

}

bool search(Node*root,int key){
    if(root==NULL){
        return false;
    }
    if(root->key==key){
        return true;
    }
    if(key<root->key){
        return search(root->left,key);
    }
       return search(root->right,key);
    
    

}

void print(Node *root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->key<<" ";
    print(root->right);

}
Node* findMin(Node* root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

Node* deletion(Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    //for searchig the key
    else if(key<root->key){
        root->left = deletion(root->left,key);
    }
    else if(key>root->key){
        root->right = deletion(root->right,key);
    }
    //now the deletion part
    else{
        //delete node with no children
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        //node with single child
        else if(root->left==NULL){
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        //node with 2 children
        else{
            Node *temp = findMin(root->right);
            root->key = temp->key;
            root->right = deletion(root->right,temp->key);
        }


    }
    return root;


}

void printrange(Node *root,vector<int> &path){
    if(root==NULL){
        return;
    }

    if(root->left==NULL && root->right==NULL){
        //print the vector
        for(int node:path){
            cout<<node<<"->";
        }
        cout<<root->key<<"->";
        cout<<endl;
        return;
    }

    //recursive case
    path.push_back(root->key);
    printrange(root->left,path);
    printrange(root->right,path);
    //backtracking 
    path.pop_back();

}
int main(){
    Node * root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};
    for(int x: arr){
        root = insert(root,x);
    }
    // print(root);
    // cout<<endl<<search(root,7);
    // int key;
    // cin>>key;
    // root = deletion(root,key);
    // print(root);

    vector<int>path={1,2,4,-1,-1,5,7,-1,-1,-1,3,-1,6,-1,-1};
    printrange(root,path);

    return 0;

}