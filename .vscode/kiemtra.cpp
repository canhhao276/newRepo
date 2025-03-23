#include<iostream>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    if(b==0) cout <<"no";
    if(a%b ==0) cout <<"yes";
    else cout <<"no";
    cin.get();
    cin.ignore();
    return 0;
}