#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin >> a;
    float dem=0;
    for(int i=1;i<=a;i++){
        dem += 1.0*i/(i+1);
    }
    cout <<fixed<<setprecision(5)<<dem;
    return 0;
}