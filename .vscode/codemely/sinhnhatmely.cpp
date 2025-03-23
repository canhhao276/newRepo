#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    vector<int> c;
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(n%2==1){
            if(i%2==1){
                c.push_back(a[i]);
            }
        }
        else{
            if(i%2==1){
                c.push_back(a[i]);
            }
        }
    }
    cout <<c.size();
    return 0;
}