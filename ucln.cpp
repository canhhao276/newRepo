#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int minl = min(abs(m),abs(n));
    for(int i = minl;i > 0;i--){
        if( m%i ==0 && n%i == 0){
            cout <<i;
            return 0;
        }
    }
    return 0;
}