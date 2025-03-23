#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin >>n>>k;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c;
    vector<long long> dem(k,0);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=(a[i]%k);
        if(dem[b[i]] ==0){
            c.push_back(b[i]);
        }
        dem[b[i]]++;
    }
    cout <<c.size();
    return 0;
}