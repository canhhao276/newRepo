#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    int dem=0;
    while(n==0){
        dem += n-n/10;
    }
    return dem;
}
int main(){
    int a;
    cin >> a;
    cout <<sumOfDigits(a);
    cin.get();
    cin.ignore();
}