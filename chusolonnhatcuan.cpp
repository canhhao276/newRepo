#include<iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    long long b;
    long long sosanh = 0;
    while(a > 0){
        b = a%10;
        if(b >sosanh){
            sosanh = b;
        }
        a /=10;
    }
    cout <<sosanh;
    return 0;
}