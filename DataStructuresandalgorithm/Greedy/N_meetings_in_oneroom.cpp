#include<bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    struct meeting{
        int start;
        int end;
        int pos;
    };
    bool static comparator(struct meeting m1,struct meeting m2){
        if(m1.end<m2.end) return true;
        else if(m1.end>m2.end) return false;
        else if(m1.pos<m2.pos) return true;
        return false;
    }
    int maxMeetings(int s[], int e[], int n)
    {
        // Your code here
        struct meeting meet[n];
        for(int i=0;i<n;i++){
            meet[i].start = s[i],meet[i].end = e[i],meet[i].pos = i+1;
        }
        sort(meet,meet+n,comparator);
        vector<int> ans;
        int limit = meet[0].end;
        ans.push_back(meet[0].pos);
        
        for(int i=1;i<n;i++){
            if(meet[i].start>limit){
                limit = meet[i].end;
                ans.push_back(meet[i].pos);
            }
        }
        int count = 0;
        for(int i=0;i<ans.size();i++){
            count++;
        }
        return count;    
    }
};

int main(){
    int s[]={1,0,3,8,5,8};
    int e[]={2,6,4,9,7,9};
    Solution so;
    int ans = so.maxMeetings(s,e,6);
    cout<<"THE MAX NO OF MEETINGS ARE:: "<<ans;
    return 0;


}