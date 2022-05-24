#include<bits/stdc++.h>

using namespace std;

class Car{
    public:
    string id;
    int x,y;
    Car(string id,int x,int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist()const{
        return x*x+y*y;
    }
};
class CarCompare{
    public:
    bool operator()(const Car A,const Car B){
        return A.dist() < B.dist();  //max heap
    }
};

void printNearestCars(vector<Car> cars,int k){
    //create a max heap of size k
    priority_queue<Car,vector<Car>,CarCompare> max_heap(cars.begin(),cars.begin()+k);
    for(int i=k;i<cars.size();i++){
        auto car = cars[i];

        if(car.dist() < max_heap.top().dist()){
            max_heap.pop();
            max_heap.push(car);
        }
    }
    while(!max_heap.empty()){
        cout<<max_heap.top().id<<endl;
        max_heap.pop();
    }
    return;
}

int main(){



    int N,K;
    cin>>N>>K;
    string id;
    int x,y;
    vector<Car> cars;
    for(int i=0;i<N;i++){
        cin>>id>>x>>y;
        Car car(id,x,y);
        cars.push_back(car);

    }
    printNearestCars(cars,K);
    return 0;
}