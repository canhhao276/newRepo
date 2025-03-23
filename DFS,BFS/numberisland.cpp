#include<iostream>
#include<vector>
using namespace std;
int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {-1,-1,0,1,1,1,0,-1};
void dfs(vector<vector<char>>& a,int x,int y,int n,int m){
    a[x][y] = '0';
    for(int q=0;q<8;q++){
        int nx = x+dx[q];
        int ny = y+dy[q];
        if(nx >=0 && nx<n && ny>=0 && ny<m && a[nx][ny] == '1'){
            dfs(a,nx,ny,n,m);
        }
    }
}

int numisland(vector<vector<char>>& a,int n,int m){
    if(a.empty()) return 0;
    int dem = 0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '1'){
                dem++;
                dfs(a,i,j,n,m);
            }
        }
    }
    return dem;
}
int main(){
    vector<vector<char>> a = {
        {'1', '1', '0', '0', '0'},
        {'0', '1', '0', '0', '1'},
        {'1', '0', '0', '1', '1'},
        {'0', '0', '0', '0', '0'},
        {'1', '0', '1', '1', '0'}
    };
    cout <<numisland(a,5,5);
    cin.get();
    cin.ignore();
    return 0;
}