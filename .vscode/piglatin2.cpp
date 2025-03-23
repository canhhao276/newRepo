#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    if(s[0]== 'u' || s[0]=='e' || s[0]=='o' || s[0]=='a' || s[0]=='i'){
        s.append("way");
    }
    else {
        s.push_back(s[0]);
        s.erase(0,1);
        s.append("ay");
    }
    cout <<s;
}