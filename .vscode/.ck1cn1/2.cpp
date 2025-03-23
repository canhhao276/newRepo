#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin >>x>>n;
    int a[n];
    int dem=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        dem +=(x-a[i]);
        if((x+dem<a[i+1]) && i !=(n-1)){
            cout <<"-1";
            cin.get();
            cin.ignore();
            return 0;
        }
    }
    cout <<dem+x;
    cin.get();
    cin.ignore();
    return 0;
}