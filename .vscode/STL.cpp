#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
    auto it=unique(a.begin(),a.end());
    cout <<it-a.begin();
    cin.get();
    cin.ignore();
    return 0;
}