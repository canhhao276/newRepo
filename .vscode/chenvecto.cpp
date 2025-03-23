#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    int x,y;
    vector<int> a(n); 
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cin >>x>>y;
    a.insert(a.begin() + (y-1),x);
    for(size_t i=0;i<a.size();i++){
        cout <<a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}