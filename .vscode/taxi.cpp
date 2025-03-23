#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a==1) cout <<"7000";
    else if(a>1 && a<=30) cout <<(a-1)*5000+7000;
    else cout << (a-30)*3000+(a-1-(a-30))*5000+7000;
    cin.get();
    cin.ignore();
    return 0;
}