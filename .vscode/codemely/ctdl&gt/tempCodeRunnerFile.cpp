#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(sqrt(a.first*a.first+a.second*a.second) != sqrt(b.first*b.first+b.second*b.second)){
        return sqrt(a.first*a.first+a.second*a.second) < sqrt(b.first*b.first+b.second*b.second);
    }
    else{
        if(a.first != b.first){
        return a.first<b.first;
        }
        else{
            return a.second<b.second; 
        }
    }
}
int main(){
    int n;
    cin >>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
        cout <<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}