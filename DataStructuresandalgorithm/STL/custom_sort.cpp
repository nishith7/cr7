#include<bits/stdc++.h>

using namespace std;

void lets_sort(){
    int arr[] = {4,2,1};
    sort(arr, arr+3);   //sorts in ascending
    //sort(arr,arr+3,greater<int>) for descending
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    cout<<endl;
    vector<int> vec = {4,2,1};

    sort(vec.begin(), vec.end());
    
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];

}

int main(){

    int num = 7;
    int c = __builtin_popcount(num);
    cout<<c<<endl;

    lets_sort();
    return 0;
}