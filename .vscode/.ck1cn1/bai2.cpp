#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout <<a[i];
        }
        if(a[i]>0 && a[i]<100 && a[i]%6==0){
            cout <<"YES";
        }
        else{
            cout <<"NO";
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}