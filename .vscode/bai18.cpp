#include<iostream>
using namespace std;
int tansuat(int a[],int n){
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int midtemp=a[n/2];
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]==midtemp){
            dem++;
        }
    }
    return dem;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    cout<<tansuat(a,n);
    cin.get();
    cin.ignore();
}