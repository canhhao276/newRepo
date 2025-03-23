#include<iostream>
using namespace std;
int main(){
    int a,b,c,n;
    cin >>n;
    a=n/5;
    b=(n-(n/5)*5)/2;
    c=(n-(n/5)*5)%2;
    cout <<a<<" "<<b<<" "<<c<<" "<<a+b+c;
    cin.get();
    cin.ignore();
    return 0;
}