#include<bits/stdc++.h>
using namespace std;
struct phanso
{
    /* data */
    long long tu;
    long long mau;
};
void nhap(phanso &p){
    cin >>p.tu>>p.mau;
}
void rutgon(phanso &p){
    long long a= __gcd(p.tu,p.mau);
    p.tu /=a;
    p.mau /=a;
}
void in(phanso p){
    cout <<p.tu<<"/"<<p.mau;
}
int main(){
    phanso p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
