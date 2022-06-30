#include<bits/stdc++.h>
#include<iostream>

using namespace std;


class Graph{
    int num_of_V;
    list<int>* adjList;
    bool *visited;

    public:
    Graph(int V);
    void addEdge(int src,int dest);
    void BFS(int strtV);

};

Graph::Graph(int V){
    num_of_V = V;
    adjList = new list<int>[V];
}

void Graph::addEdge(int src,int dest){
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}

void Graph::BFS(int strtV){
    visited = new bool[num_of_V];
    for(int i=0;i<num_of_V;i++){
        visited[i] = false;
    }
    list<int>queue;
    visited[strtV] = true;
    queue.push_back(strtV);
    while(!queue.empty()){
        int curr = queue.front();
        cout<<"Visited: "<<curr<<" ";
        queue.pop_front();
    
    for(auto i=adjList[curr].begin();i!=adjList[curr].end();++i){
        int adjVertex = *i;
        if(!visited[adjVertex]){
            visited[adjVertex] = true;
            queue.push_back(adjVertex);
                    }

    }
}
}

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(2);

  return 0;
}