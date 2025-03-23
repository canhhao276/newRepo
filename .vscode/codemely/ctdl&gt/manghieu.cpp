#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,q;
    cin >>n>>q;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    vector<long long> D(n);
    while(q--){
        for(int i=0;i<n;i++){
            if(i==0){
                D[0]=a[0];
            }
            else{
                D[i]=a[i]-a[i-1];
            }
        }
        int l,r,k;
        cin >>l>>r>>k;
        D[l] +=k;
        D[r+1] -=k;
    }
    for(int i=0;i<n;i++){
        D[i+1] += D[i];
        cout <<D[i]<<" ";
    }
    return 0;
}