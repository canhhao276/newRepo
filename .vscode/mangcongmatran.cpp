#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int m,n;
    cin >> m>>n;
    float a[m][n],b[m][n],kq[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> b[i][j];
        }  
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<fixed<<setprecision(2)<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}