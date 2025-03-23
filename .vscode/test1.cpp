#include<iostream>
#include<cmath>
using namespace std;
void ngto(int a){
    if(a<2) cout <<"Not a prime.";
    for(int i=2;i<a;i++){
        if(a%i ==0){
            cout <<"Not a prime.";
        }
        else cout <<"Prime.";
        return;
    }
}
int main(){
    int n;
    cin >> n;
    ngto(n);
    cin.get();
    cin.ignore();
    return 0;
}