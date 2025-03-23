#include<iostream>
#include<map>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string,int> mp;
    while(ss >> word){
        mp[word]++;
    }
    for(auto it : mp){
        cout <<it.first<<" "<<it.second<<endl;
    }
    return 0;
}