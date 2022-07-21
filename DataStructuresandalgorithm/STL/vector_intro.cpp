#include<bits/stdc++.h>

using namespace std;

void myvector(){
    vector<int> v;
    v.push_back(9);
    v.emplace_back(8); //faster

    vector<pair<int,int>> v1;

    v1.push_back({5,8});
    v1.push_back({3,6});

    vector<int> temp(5,100);
    vector<int> temp1(5,20);
    vector<int>temp2(temp1);

    vector<int>::iterator it1 = v.end();//points to space right after end
    vector<int>::iterator it = v.begin(); //points to memory address
    it++;

    cout<<*(it)<<" "; //with * its gives value of that address

    cout<<temp.back()<<endl; //prints the last element

    //try to iterate using auto it will automatically get that data type and will assign

    //using for each loop
    for(auto it: v){
        cout<<it<<" "<<endl;
    }
    //use v.erase() to delete
    //can delete single element and elements in range
    //use pop_back() to remove from the end
    // use .swap() to swap elements of 2 vectors
    //.clear() deletes everything 
    // .empty() checks if vector is emoty


}

int main(){
    myvector();
    return 0;
}