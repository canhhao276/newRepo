#include<vector>
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin >>m>>n;
    vector<vector<int>> a(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    return 0;
}