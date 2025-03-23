#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s = 0;
    for(int i = 0; i <= sqrt(n); i++){
        if(n % i ==0){
            s += i;
            s += n/i;
            if(n/i != i) s= s + n/i;
        }
    }
    cout <<s+n<< endl;
    cin.get();
    cin.ignore();
    return 0;
}