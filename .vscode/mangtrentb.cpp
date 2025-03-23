#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    float a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dem=0;
    for(int i=0;i<n;i++){
        dem +=a[i];
    }
    float tb=1.0*dem/n;
    for(int i=0;i<n;i++){
        if(a[i]>tb){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}