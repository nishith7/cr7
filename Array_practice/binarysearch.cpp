#include <iostream>

using namespace std;

int main(){
    int a[]={23,45,67,89,122,344};
    int key=45;
    int n=sizeof(a)/sizeof(int);
    int s=0,e=n-1;
    int index;

    while(s<=e){
        int mid=(s+e)/2;
       if(a[mid]==key){
           index=mid;
           cout<<"FOUND AT::"<<index;
           break;
       }
      else if(a[mid]>key){
           e=mid-1;
       }
       else{
           s=mid+1;
       }

    }
    return 0;
}