#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >>s;
    int dem=0;
    for(size_t i=0;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
            dem++;
        }
    }
    cout <<dem;
    cin.get();
    cin.ignore();
    return 0;
}