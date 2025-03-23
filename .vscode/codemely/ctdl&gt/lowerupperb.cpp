#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cin >>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    auto it =lower_bound(a.begin(),a.end(),x);
    if(it != a.end()){
        cout <<it-a.begin();
    }
    else{
        cout <<"-1"; 
    }
    return 0;
}
