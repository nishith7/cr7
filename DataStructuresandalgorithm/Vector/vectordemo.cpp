/*everytime you enter an element in vector and if it is out of bound 
it will double itself*/
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector <int> arr={1,2,3,4,5};

    arr.pop_back();                    //removes last element

    arr.push_back(34);                //inserting elements

    for(int i=0;i<arr.size();i++){    //printing all elements
        cout<<arr[i]<<endl;
    }

    cout<<arr.size()<<endl;           //size of vector

    cout<<arr.capacity()<<endl;       //capacity


    //print 2d array
    vector <vector<int>> arr={
        {1,2,3},
        {4,5,6},
        
    }
}
