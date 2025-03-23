#include<iostream>
using namespace std;
int ptich(int n){
    int temp=0;
    for(int i=0;i<=n/2;i++){
        temp++;
    }
    return temp;
}
int main(){
    int n;
    cin >>n;
    cout<<ptich(n);
    cin.get();
    cin.ignore();
    return 0;
}