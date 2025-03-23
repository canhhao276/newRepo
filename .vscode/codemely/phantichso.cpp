#include<iostream>
#include<cmath>
using namespace std;
bool ngto(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >>n;
    if(ngto(n)){
        cout <<n;
    }
    else{
        for(int i=2;i<=n;i++){
            if(ngto(i)){
                while(n%i==0){
                    cout <<i;
                    n /= i;
                    if(n>1) cout <<"*";
                }
            }
        }
    }
}