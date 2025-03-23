#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a, b;
    cin >> a >> b;
    int dem;
    for(int i=a;i<=b;i++){
        float doC = (float)(i-32)*5/9;
        float doK = doC +273.15;
        cout<<fixed<<setprecision(2)<<i<<" "<<doC<<" "<<doK<< endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}