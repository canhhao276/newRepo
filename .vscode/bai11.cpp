#include<bits/stdc++.h>
using namespace std;
void kiemtra(long long n){
    for(long long a=INT_MIN;a*(a+2)<=INT_MAX;a++){
        if(a*(a+2)==n){
            cout <<a;
            return;
        }        
    }
    cout <<"NO";
}
int main(){
    long long n;
    cin >>n;
    kiemtra(n);
    cin.get();
    cin.ignore();
    return 0;
}