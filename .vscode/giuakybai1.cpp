#include<bits/stdc++.h>
using namespace std;
bool ngto(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n %i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>> n;
    cout<<ngto(n);
    cin.get();
    cin.ignore();
    return 0;
}