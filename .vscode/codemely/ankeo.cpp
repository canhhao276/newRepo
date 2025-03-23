#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<long long> a(n);
    vector<long long> dem(n+1,0);
    vector<long long> b;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        if(dem[a[i]] == 0){
            b.push_back(a[i]);
        }
        dem[a[i]]++;
    }
    cout<<b.size();
    return 0;
}