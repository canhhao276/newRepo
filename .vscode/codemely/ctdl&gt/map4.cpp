#include<iostream>
#include<map>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={3,4,5,6,7};
    map<int,int> mp;
    for(int i=0;i<5;i++){
        mp[a[i]]=1;
    }
    for(int i=0;i<5;i++){
        mp[b[i]]=1;
    }
    for(pair<int,int> it : mp){
        cout <<it.first<<" ";
    }
    return 0;
}