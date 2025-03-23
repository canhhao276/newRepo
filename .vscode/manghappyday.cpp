#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            cout <<i+1<<" ";
        }
    }    
    cin.get();
    cin.ignore();
    return 0;
}