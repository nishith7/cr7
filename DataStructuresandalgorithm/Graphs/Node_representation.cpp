#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    string name;
    list<string>nbrs;
    Node(string name){
        this->name = name;
    }
};

class Graph{
    //all nodes
    //hashmap (string,Node*)
    unordered_map<string,Node*>m;
    public:
    Graph(vector<string>cities){
        for(auto city:cities){
            m[city] = new Node(city);
        }
    }

    void addCity(string x,string y,bool undir = false){
        m[x]->nbrs.push_back(y);
        if(undir){
            m[y]->nbrs.push_back(x);
        }
    }

    void printlist(){
        for(auto citypair: m){
            auto city = citypair.first;
            Node *node = citypair.second;
            cout<<city<<"-->";
            for(auto nbr:node->nbrs){
                cout<<nbr<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    vector<string>cities = {"Delhi","London","Paris","New York"};
    Graph g(cities);
    g.addCity("Delhi","London");
    g.addCity("New York","London");
    g.addCity("Delhi","Paris");
    g.addCity("Paris","New York");

    g.printlist();
}