#include<iostream>
#include<vector>
#include<string>
using namespace std;
void ham(string &s){
    int dem=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i] != '0'){
            break;
        }
        else{
            dem++;
        }
    }
    s.erase(s.length()-dem,dem);
}
bool check(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i] != s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >>n;
    string s=to_string(n);
    ham(s);
    if(check(s)){
        cout <<"YES";
    }
    else{
        cout <<"NO";
    }
    return 0;
}