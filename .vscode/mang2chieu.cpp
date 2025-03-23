#include<iostream>
using namespace std;
int main(){
    int m,n,Q;
    cin >> m >> n>>Q;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    } 
    int b[Q][2];
    for(int q=0;q<Q;q++){
        cin>>b[q][0]>>b[q][1];    
    }
    for(int q=0;q<Q;q++){
        int i=b[q][0];
        int j=b[q][1];
        cout<<a[i-1][j-1]<<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}