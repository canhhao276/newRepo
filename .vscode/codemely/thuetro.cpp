#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n,m,k;
    cin >>n>>m>>k;
    int temp1=-1;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    a[m-1]=0;
    for(int i=0;i<n;i++){
        if((a[i] != 0) && a[i]<=k){
            int temp2=abs(i+1-m);
            if(temp1==-1 || temp2<temp1){
                temp1=temp2;
            }
        }
    }
    if(temp1==-1){
        cout <<"-1";
    }
    else{
        cout <<temp1*10;
    }
    return 0;
}