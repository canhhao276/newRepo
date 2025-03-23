#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin >>n>>k;
    if(n<=0 || k<=0){
        cout <<"INVALID";
        return 0;
    }
    for(int i=1;i<=n;i++){
        cout <<k*i<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}