#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
    if(a==b && b==c) cout <<"tam giac deu";
    else if(a==b || b==c || a==c) cout <<"tam giac can";
    else if((a*a+b*b) == c*c ||(a*a+c*c) == b*b || (b*b+c*c)==a*a)
    cout <<"tam giac vuong";
    else cout <<"tam giac thuong";
    }
    else cout <<"khong phai tam giac";
    cin.get();
    cin.ignore();
    return 0;
}