#include<iostream>
#include<vector>
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};
void dfs(vector<vector<int>> &a,int x,int y,int n,int m,int oldcolor,int newcolor){
    a[x][y] = newcolor;
    for(int q=0;q<4;q++){
        int nx = x + dx[q];
        int ny = y + dy[q];
        if(nx < n && nx >= 0 && ny <m && ny >=0 && a[nx][ny] == oldcolor){
            dfs(a,nx,ny,n,m,oldcolor,newcolor);
        }
    }
}
vector<vector<int>> floodfill(vector<vector<int>> &image,int sr,int sc,int n,int m,int newcolor){
    int oldcolor = image[sr][sc];
    if(oldcolor == newcolor){
        return image;
    }
    dfs(image,sr,sc,n,m,oldcolor,newcolor);
    return image;
}
int main(){
    vector<vector<int>> image{
        {1,1,0},
        {1,1,0},
        {1,0,1}
    };
    int sr = 1,sc = 1,newcolor = 2;
    vector<vector<int>> res=floodfill(image,sr,sc,3,3,newcolor);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<image[i].size();j++){
            cout <<image[i][j]<<" ";
        }
        cout <<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}