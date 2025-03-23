#include<iostream>
using namespace std;
int kDigitsNumbers(int *a,int n,int k){
    for(int i=0;i<n;i++){
        int dem=0;
        int temp=a[i];
        while(temp>0){
            dem++;
            temp /=10;
        }
        if(dem==k){
            return a[i];
        }
    }
    return -1;
}
int main(){
    int n,k;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cin >>k;
    cout <<kDigitsNumbers(a,n,k);
}