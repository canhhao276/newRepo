#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= 6 && a<=21 && b>=6 && b<=21){
        if(a < 17) cout <<(b-a)*2500*c;
        else cout <<(b-a)*c*3000;
    }
    cin.get();
    cin.ignore();
    return 0;
}