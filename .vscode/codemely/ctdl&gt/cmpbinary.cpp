#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int tongso(int n){
    int dem=0;
    while(n>0){
        if((n%10) %2 ==1){
            dem ++;
        }
        n /= 10;
    }
    return dem;
}
bool cmp(int a,int b){
    if(tongso(a) != tongso(b)){
        return tongso(a)>tongso(b);
    }
    else{
        return a<b;
    }
}
int main(){
    int n;
    cin >>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    return 0;
}