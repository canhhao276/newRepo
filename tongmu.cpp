#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long a;
    cin >> a;
    long long dem =0;
    for(int i=1;i<=a;i++){
        dem += pow(i, i);
    }
    cout << dem;
    return 0;
}