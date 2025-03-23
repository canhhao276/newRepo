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
        mp[a[i]]=1;
    }
    cout <<mp.size();
    return 0;
}