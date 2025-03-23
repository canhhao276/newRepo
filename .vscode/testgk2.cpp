#include<iostream>
using namespace std;
void check(int n){
    int dem=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            dem +=i;
        }
    }
    if(dem==n){
        cout <<"yes";
    }
    else{
        cout <<"no";
    }
}
int main(){
    int n;
    cin >>n;
    check(n);
    cin.get();
    cin.ignore();
    return 0;
}