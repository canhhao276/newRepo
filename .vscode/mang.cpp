#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin >>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    int i,j,x;
    cin >>i>>j>>x;
    a[i][j]=x;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}