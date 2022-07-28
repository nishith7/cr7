#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                queue<int> q;
                q.push(i);
                color[i]=1;
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(int child:graph[node]){
                        if(color[child]==-1){
                            color[child] = 1-color[node];
                            q.push(child);
                        }else if(color[child]==color[node]){
                            return false;
                        }
                    }
                }
                
            }
        }
        
        return true;
    }
};