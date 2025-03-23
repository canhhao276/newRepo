#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool ngto(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    int mngto[n];
    int demngto=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
        if(ngto(a[i])){
            mngto[demngto++]=a[i];
        }
    }
    sort(mngto,mngto+demngto);
    int temp=0;
    for(int i=0;i<n;i++){
        if(ngto(a[i])){
            a[i]=mngto[temp++];
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}