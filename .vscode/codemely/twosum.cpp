#include<iostream>
using namespace std;
bool check(int n,long long k, long long a[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==k){
                cout <<i+1<<" "<<j+1;
                return true;
            }
        }
    }
    return false;   
}
int main(){
    int n;
    cin >>n;
    long long k;
    cin >>k;
    long long a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    if(check(n,k,a)){
    }
    else{
        cout <<"NO";
    }
    return 0;
}