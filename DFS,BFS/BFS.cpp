#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> ke[1001];
bool visited[1001];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v =q.front();
        q.pop();
        cout <<v<<" ";
        for(int x : ke[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){

}