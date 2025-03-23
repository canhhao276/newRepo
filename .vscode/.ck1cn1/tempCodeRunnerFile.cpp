#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin >>s;
    for(int i=0;i<s.size();i++){
        if(islower(s[i])){
           s[i]= toupper(s[i]);
        }
        if(isdigit(s[i])){
            s[i]='_';
        }
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
    }
    cout <<s;
    cin.get();
    cin.ignore();
    return 0;
}