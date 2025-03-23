#include<iostream>
#include<map>
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
    for(int i=0;i<n;i++){
        if(mp.find(a[i]) != mp.end()){
            cout <<a[i]<<" "<<mp[a[i]]<<endl;
            mp.erase(a[i]);
        }
    }
    return 0;
}