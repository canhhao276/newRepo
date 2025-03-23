#include<iostream>
#include<vector>
using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
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
void loang(int i,int j){
    a[i][j]=0;
    for(int q=0;q<4;q++){
        int i1=i+dx[q],j1=j+dy[q];
        if(i1>=0 && i1<n && j1>=0 && j1<m){
            if(a[i1][j1]){
                loang(i1,j1);
            }
        }
    }
}
int main(){
    nhap();
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                dem++;
                loang(i,j);
            }
        }
    }
    cout <<dem<<endl;
    return 0;
}