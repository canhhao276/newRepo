#include<iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    long long tich=1;
    long long tong=0;
    for(int i=1;i<=a;i++){
        tich *=i;
        tong +=tich;
    }
    cout <<tong;
    cin.get();
    cin.ignore();
    return 0;
}