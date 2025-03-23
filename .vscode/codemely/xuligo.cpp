#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<double> a(n);
    int sum1=0,tb;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
    tb= a[n/2];
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2 +=abs(a[i]-tb);
    }
    cout <<sum2;
    return 0;
}