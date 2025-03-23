#include<iostream>
using namespace std;
void kiemtra(int n){
    for(int a=1;a*(a+5)<=n;a++){
        if(a*(a+5)==n){
            cout <<a;
            return;
        }
    }
     cout <<"NO";
}
int main(){
    int n;
    cin >>n;
    kiemtra(n);
    cin.get();
    cin.ignore();
    return 0;
}