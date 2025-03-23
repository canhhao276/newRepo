#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n;
    cin >>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=0;i<n;i++){
        string chuoiso =a[i];
        sort(chuoiso.begin(),chuoiso.end());
        cout <<chuoiso<<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}