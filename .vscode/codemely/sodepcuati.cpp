#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cin >>m>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        cin >>a[i];
    }
    for(int j=0;j<n;j++){
        cin >>b[j];
    }
    int min1=a[0],min2=b[0];
    for(int i=1;i<m;i++){
        if(a[i]<min1){
            min1=a[i];
        }
    }
    for(int i=1;i<n;i++){
        if(b[i]<min2){
            min2=b[i];
        }
    }
    cout <<min1<<min2;
    return 0;
}