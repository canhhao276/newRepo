#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int tong=0, dem=0;
    for(int i=0;i<n;i++){
        tong +=a[i];
        dem++;
    }
    float tb=1.0*tong/dem;
    for(int i=0;i<n;i++){
        if(a[i]>=tb){
        cout <<a[i]<<" ";
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}