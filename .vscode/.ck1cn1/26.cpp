#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    if(n%4 !=0){
        cout <<"no";
    }
    else{
        int dem1=2,dem2=1;
        for(int i=0;i<n/2;i++){
            cout <<dem1<<" ";
            dem1+=2;
        }
        for(int i=0;i<n/4;i++){
            cout <<dem1-1<<" ";
            dem2+=2;
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}