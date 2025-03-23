#include<iostream>
using namespace std;
int main(){
    int fn,a;
    cin >> a;
    if(a==1 || a==0){
        cout<<"1";
        return 0;
    }
    int f0=1, f1=1;
    for(int i=2;i<=a;i++){
        fn=2*f1+f0+1;
        f0 =f1;
        f1 =fn;
    }
    cout <<fn;
    return 0;
}