#include<iostream>
#include<vector>

using namespace std;

int largestelement(vector<int> arr){
    int largest=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    return largest;
}

int main(){
    vector<int> arr={-1,-2,-3,-3,8};
    cout<<"LARGEST::"<<largestelement(arr);
    return 0;
}