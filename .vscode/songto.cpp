#include<iostream>
#include<cmath>
using namespace std;
void ngto(int a){
    if(a<2) cout <<"Not a prime";
    int dem=0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i ==0){
            dem ++;
        }
    }
    if(dem==0) cout <<"Prime";
    else cout <<"Not a Prime";
}
int main(){
    int n;
    cin >> n;
    ngto(n);
    cin.get();
    cin.ignore();
    return 0;
}