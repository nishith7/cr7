#include<iostream>
#include<vector>

using namespace std;


int lowerbound(vector<int> A, int Val) {
    // your code goes here
    int sz = A.size();
    
    int l = 0, r = (sz-1);
    
    int answer = -1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        if (A[mid] > Val) {
            r = mid-1;
        }
        else {
            answer = A[mid];
            l = mid+1;
        }
    }
    
    return answer;
    
}

int main(){
    vector<int> A={-1,-1,2,3,5};

    cout<<"LOWER BOUND IS::"<<lowerbound(A,0);
    return 0;
}