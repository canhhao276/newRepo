#include<iostream>
#include<cmath>
using namespace std;
void kiemtra(int a[],int n){
    int dem=0;
    int sqrtN;
    for(int i=0;i<n;i++){
        sqrtN=sqrt(a[i]);
        if(sqrtN*sqrtN==a[i]){
            dem++;
        }
    }
    cout <<dem;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    kiemtra(a,n);
    cin.get();
    cin.ignore();
    return 0;
}