#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;
int count(char c1,char c2){
    c1=tolower(c1);
    c2=tolower(c2);
    if(c1==c2){
        return 0;
    }
    else{
    return abs(c1-c2-1);
    }
}
int main(){
    char c1,c2;
    cin >>c1>>c2;
    cout <<count(c1,c2);
    cin.get();
    cin.ignore();
    return 0;
}