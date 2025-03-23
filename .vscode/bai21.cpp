#include<bits/stdc++.h>
using namespace std;
void hieumin(int a[],int n){
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int temp=INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            temp= min(temp,abs(a[i]-a[j]));
        }
    }
    cout <<temp;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    hieumin(a,n);
    cin.get();
    cin.ignore();
    return 0;
}