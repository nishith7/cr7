#include<iostream>
#include "list.h"

using namespace std;



int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    //l1.push_back(0);
    l1.insert(5,2);
    l1.insert(6,3);
    l1.insert(100,0);
    Node* head = l1.begin();
     while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
     }
//    if(l1.searchrecursive(head,3)){
//        cout<<"FOUND";
//    }else{
//        cout<<"NOT FOUND";
//    }
cout<<head<<endl;
l1.reverslist(head);
cout<<head;

    return 0;


}
