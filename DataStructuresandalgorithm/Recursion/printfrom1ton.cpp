#include<bits/stdc++.h>
using namespace std;

// void dec(int N){
//     if(N==0){
//         return;
//     }
//     cout<<N<<" ";
//     dec(N-1);
  
// }
void print(vector<int> v,int N){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
vector <int> inc(int N){
    vector<int> v;
    if(N==0){
        return v;
    }   
    inc(N-1);
    v.push_back(N);

    print(v,N);

}




int main(){
    int N;
    cin>>N;

    //  dec(N);
    //  cout<<endl;
     inc(N);
     
     

    return 0;
}