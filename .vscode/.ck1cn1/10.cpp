#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >>s;
    int max_dem=0;
    int temp=0;
    for(size_t i=0;i<s.size()-1;i++){
        if(s[i]=='*'){
            temp++;
        }
        else{
            max_dem=max(max_dem,temp);
            temp=0;
        }
    }
    max_dem=max(max_dem,temp);
    cout <<max_dem;
    cin.get();
    cin.ignore();
    return 0;
}