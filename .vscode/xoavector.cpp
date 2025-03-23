#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    cin >>x;
    a.erase(a.begin()+ x-1);
    for(size_t i=0;i<a.size();i++){
        cout <<a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}