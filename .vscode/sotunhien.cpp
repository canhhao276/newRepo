#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(((a/100) > (a-(a/10)*10)) && (a >99 && a<1000)){
        int b = reserve(a);
        int c = a-b;
        int d = reverse(c);
        cout <<c+d;
    }
    else cout <<"invalid";
    cin.get();
    cin.ignore();
    return 0;
}