
class List;                                  //forward declaration
class Node{
    public:
    Node* next;
    int data;
    Node(int d):data(d),next(NULL){

    } 
    friend class List;
};

class List{
    Node * head;
    Node * tail;
    public:
    List():head(NULL),tail(NULL){

    }
    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
            return;
        }else{
            Node * n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
            return;
        }else{
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }

    }
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
            return;
        }else{
            Node* temp = head;
            for(int j=1;j<=pos-1;j++){
                temp=temp->next;
            }

            Node* n = new Node(data);
            n->next = temp->next;
            temp->next = n;

        }
    }
bool link_search(Node*head,int key){
    Node*temp=head;
    while(temp!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next;
    }
    return false;
}

bool searchrecursive(Node*head,int key){
    if(head==NULL){
        return false;
    }
    if(head->data==key){
        return true;
    }else{
        return searchrecursive(head->next,key);
    }
}
//destructor for deleting the linked list
void reverslist(Node*&head){
    Node* c=head;
    Node* p=NULL;
    Node* n;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;

}

};
