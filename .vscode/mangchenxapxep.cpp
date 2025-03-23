#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int n;
    double x;
    cin >>n;
    vector<double> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cin >>x;
    a.push_back(x);
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}