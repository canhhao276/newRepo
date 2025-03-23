#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int m,n;
    int q;
    cin >>m >>n;
    double a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[m][n];
        }
    }
    cin >>q;
    double tong=0;
    for(int i=0;i<n;i++){
        tong += a[q-1][n];
    }
    cout<<fixed<<setprecision(2)<<tong;
    cin.get();
    cin.ignore();
    return 0;
}