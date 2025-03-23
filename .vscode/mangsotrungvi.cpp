#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    if(n%2==0){
        cout <<fixed<<setprecision(1)<<(a[n/2]+a[n/2+1])/2;
    }
    else{
        cout <<fixed<<setprecision(1)<<a[n/2];
    cin.get();
    cin.ignore();
    return 0;
}