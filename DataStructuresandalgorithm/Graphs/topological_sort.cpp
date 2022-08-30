#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void mydfs(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it]){
	            mydfs(it,vis,st,adj);
	        }
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int>st;
	    vector<int>vis(V,0);
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            mydfs(i,vis,st,adj);
	        }
	        
	    }
	    vector<int>topo;
	    while(!st.empty()){
	        topo.push_back(st.top());
	        st.pop();
	    }
	    return topo;
	}
};