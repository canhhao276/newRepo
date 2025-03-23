#include<bits/stdc++.h>
using namespace std;
bool sole(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    int demle=0;
    int mangle[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
        if(sole(a[i])){
            mangle[demle++]=a[i];
        }
    }
    sort(mangle,mangle+demle,greater<int>());
    int temp=0;
    for(int i=0;i<n;i++){
        if(sole(a[i])){
            a[i]=mangle[temp++];
        }
    }
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}