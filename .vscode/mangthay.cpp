#include<iostream>
using namespace std;
int main(){
    int m,n,q;
    cin >> m >>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    cin >>q;
    q--;
    for(int i=0;i<m;i++){
        for(int j=q;j<n-1;j++){
            a[i][j]=a[i][j+1];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n-1;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}