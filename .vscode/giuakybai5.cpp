#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int check(string s){
    if(s.length() !=8)
    return 0;
    int hoa=0, thuong=0,dacbiet=0,so=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])) hoa=1;
        else if(islower(s[i])) thuong=1;
        else if(isdigit(s[i])) so=1;
        else dacbiet=1;
    }
    if(hoa + thuong + so + dacbiet ==4) return true;
    return false;
}
int main(){
    string s;
    cin >>s;
    if(check(s)) cout <<"true";
    else cout <<"false";
    cin.get();
    cin.ignore();
    return 0;
}