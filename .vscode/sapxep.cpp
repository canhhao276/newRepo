#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}