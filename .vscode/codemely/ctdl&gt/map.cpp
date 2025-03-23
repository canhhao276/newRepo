#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto it : mp){
        cout << it.first<<" "<<it.second<<endl;
    }
    return 0;
}