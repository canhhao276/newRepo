#include<iostream>
using namespace std;
int songuyen(int n,int m){
    int a[n];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i];
            if(a[i]>a[j]){
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int n,m;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cin >>m;
    cout <<a[m-1];
    cin.get();
    cin.ignore();
    return 0;
}