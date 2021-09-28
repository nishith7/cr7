#include<iostream>
#include<vector>

using namespace std;

void counting_sort(int a[],int n){
     //finding the largest
     int largest = -1;
     for(int i=0;i<n;i++){
         largest = max(largest,a[i]);
     }
     //create a frequency vector 
     vector <int> freq(largest+1,0);                            //total time complexity is O(N+range)
     for(int i=0;i<n;i++){
         freq[a[i]]++;
     }
     //put back elements from freq to a

     int j=0;
     for(int i=0;i<=largest;i++){
         while(freq[i]>0){
             a[j]=i;
             freq[i]--;
             j++;
         }
     }
     return;

}

int main(){
    int a[]={88,97,10,12,151,5,6,12,5,8};
    int n = sizeof(a)/sizeof(int);
    counting_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<", ";

    }
    return 0;
}