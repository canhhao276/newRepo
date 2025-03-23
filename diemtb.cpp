#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a,dem;
    cin >> a;
    float tong =0;
    for(int i=1;i <=a;i++){
        cin >> dem;
        tong += dem;

    }
    cout <<fixed<<setprecision(2)<<1.0*tong/a;
    cin.get();
    cin.ignore();
    return 0;
}