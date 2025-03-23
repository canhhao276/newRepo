#include<iostream>
#include<cctype>
using namespace std;
void kiemtra(char n){
    if(n=='u' || n=='e' || n=='o' || n=='a'|| n=='i'){
        if(islower(n)){
            cout << (char)toupper(n+2);
        }
    }
    else cout <<"NO";
}
int main(){
    char n;
    cin >>n;
    kiemtra(n);
    cin.get();
    cin.ignore();
    return 0;
}