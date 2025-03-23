#include<iostream>
using namespace std;
void ngto(int a){
    if(a<2) cout <<"Not a prime.";
    for(int i=2;i<a;i++){
        if(a%i==0){
            cout <<"Not a prime.";
        }
        else cout <<"Prime.";
    }
}
int main(){
    int a;
    cin >> a;
    ngto(a);
    cin.get();
    cin.ignore();
    return 0;
}