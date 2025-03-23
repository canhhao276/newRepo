#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    int dem=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1] && a[i+1]<a[i+2] && a[i+2]<a[i+3] ){
            dem++;
        }
    }
    cout <<dem;
    cin.get();
    cin.ignore();
    return 0;
}