#include<iostream>
using namespace std;
long long ham(int n){
    long long a[n+1];
    a[0]=1;
    a[1]=2;
    for(int i=2;i<=n;i++){
    a[i]=3*a[i-1]-2*a[i-2];
    }
    return a[n];
}
int main(){
    int n;
    cin >>n;
    cout <<ham(n);
    cin.get();
    cin.ignore();
    return 0;
}