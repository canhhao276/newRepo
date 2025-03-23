#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int x;
bool cmp1(int a,int b){
    if(abs(a-x) != abs(b-x)){
    return abs(a-x) <abs(b-x);
    }
    else{
        return a<b;
    }
}
bool check(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
bool cmp2(int a,int b){
    if(check(a) && check(b)){
        return a<b;
    }
    else if(check(a) == false && check(b)==false){
        return a>b;
    }
    else if(check(a)==true && check(b) == false){
        return a<b;
    }
}
int main(){
    int n;
    cin >>n;
    cin >>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end(),cmp1);
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    sort(a.begin(),a.end(),cmp2);
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    return 0;
}