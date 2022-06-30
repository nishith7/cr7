#include<bits/stdc++.h>

using namespace std;


class Graph{
    int V;
    list<int> *l;

    public:
    Graph(int v){
        V=v;
        l = new list<int>[V];
    }

    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(auto node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }

    }
    void bfs(int source){
        queue <int> q;
        bool *visited = new bool[V]{0};
        q.push(source);
        visited[source] = true;
        while(!q.empty()){
            //do some work for every node
            int f = q.front();
            cout<<f<<", ";
            q.pop();
            //push the neighbours of curr node inside q if they are not already visited
            for(auto nbr:l[f]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true; 
                }
            }

        }
    }
    void dfsrec(int node,bool *visited){
        visited[node] = true;
        cout<<node<<", ";


        //make a dfs call on all its unvisited neighbours
        for(int nbr:l[node]){
            if(!visited[nbr]){
                dfsrec(nbr,visited);
            }
        }
        return;

    }
    void dfs(int source){
        bool *visited = new bool[V]{0};
        dfsrec(source,visited);

          
    }

};

int main(){
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.print();
    g.bfs(1);
    cout<<endl;
    g.dfs(1);
    
    return 0;


}