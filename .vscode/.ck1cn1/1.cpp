#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int dem=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>2*a[j]){
                dem++;
            }
        }
    }
    cout <<dem;
    cin.get();
    cin.ignore();
    return 0;
}