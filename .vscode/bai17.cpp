#include<iostream>
using namespace std;
int tong(int a[100][100],int n,int m){
    int temp=0;
    for(int i=0;i<m;i++){
        temp += a[0][i];
        temp += a[n-1][i]; 
    }
    for(int i=1;i<n-1;i++){
        temp += a[i][0];
        temp += a[i][m-1];
    }
    return temp;
}
int main(){
    int m,n; 
    cin >>n >> m;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>a[i][j];
        }
    }
    cout <<tong(a,n,m);
    cin.get();
    cin.ignore();
    return 0;
}