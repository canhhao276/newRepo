#include<iostream>
#include<vector>
using namespace std;
vector<int> ke[1001];
bool visited[1001];
void DFS(int u){
    cout <<u<<" ";
    visited[u]=true;
    for(int v : ke[u]){
        if(!visited[u]){
            DFS(v);
        }
    }
}