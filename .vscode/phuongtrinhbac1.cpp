#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a, b;
    cin >> a >> b;
    if(a== 0 && b== 0) cout <<"phuong trinh co vo so nghiem";
    else if(a==0 && b!=0) cout<<"phuong trinh vo nghiem";
    else cout<<fixed<<setprecision(2)<<-b/a;
    cin.get();
    cin.ignore();
    return 0;
}