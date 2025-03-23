#include<iostream>
using namespace std;
bool check(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    if(check(a,n)){
        cout <<"mảng giảm thực sự";
    }
    else cout<<"mảng không phải là mảng giảm";
    cin.get();
    cin.ignore();
    return 0;
}