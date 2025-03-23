#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    int tong=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        if(sqrt(a[i])*sqrt(a[i])==a[i]){
            cout <<a[i]<<" ";
            tong+=a[i];
        }
    }
    cout <<endl;
    cout <<tong<<endl;
    cin.get();
    cin.ignore();
    return 0;
}