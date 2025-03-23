#include<math.h>
#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long s = 0;
    for(long long i = 0; i <= n; i++){
        if(n % i ==0)
        s += i;
    }
    cout <<s<< endl;
    cout << s << endl;
    return 0;
}
