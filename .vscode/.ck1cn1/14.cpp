#include<iostream>
using namespace std;
bool fib(long long n){
    if(n<0){
        return false;
    }
    long long a=0,b=1;
    while(a<n){
        long long temp=a+b;
        a=b;
        b=temp;
    }
    if(a==n){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    if(fib(n)){
        cout <<"yes";
    }
    else{
        cout <<"no";
    }
    cin.get();
    cin.ignore();
    return 0;
}