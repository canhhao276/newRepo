#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n; cin >> n;
    float a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int dem=0;
    float tb;
    for(int i=0;i<n;i++){
        dem +=a[i];
    }
    tb= 1.0*dem/n;
    float b=0;
    for(int i=0;i<n;i++){
        a[i] =(a[i]-tb)*(a[i]-tb);
        b +=a[i];
    }
    cout <<fixed<<setprecision(2)<<tb<<" "<<1.0*b/n;
    cin.get();
    cin.ignore();
    return 0;
}