#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
int n,m;
vector<vector<int>> a;
void nhap(){
    cin >>n>>m;
    a.assign(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
}
int camthoi(){
    queue<pair<int,int>> q;
    int freshcount = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==2){
                q.push({i,j});
            }
            else if(a[i][j] == 1){
                freshcount++;
            }
        }
    } 
    int time =0;
    while(!q.empty()){
        int size = q.size();
        bool visted = false;
        for(int i=0;i<size;i++){
            pair<int,int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            for(int k=0;k<4;k++){
                int nx = x+dx[k];
                int ny = y+dy[k];
                if(nx >= 0 && nx < n && ny>=0 && ny <m && a[nx][ny] == 1){
                    a[nx][ny] =2;
                    q.push({nx,ny});
                    freshcount--;
                    visted = true;
                }
            }
        }
        if(visted) time++;
    }
    return (freshcount == 0)? time : -1;
}
int main(){
    nhap();
    cout <<camthoi()<<endl;
    cin.get();
    cin.ignore();
    return 0;
}