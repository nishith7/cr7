#include<bits/stdc++.h>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> uset;
        while(head!=NULL){
            if(uset.find(head)!=uset.end()){
                return true;
            }
            uset.insert(head);
            head = head->next;
        }
        return false;
        
    }
};

