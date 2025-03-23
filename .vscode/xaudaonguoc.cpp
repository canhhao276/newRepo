#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    string a1 =to_string(n);
        if(a1[0]<a1[2]){
        cout <<"invalid";
    } 
    reverse(a1.begin(),a1.end());
    int a2 =stoi(a1);
    int b= (n-a2);
    string b1 = to_string(b);
    reverse(b1.begin(),b1.end());
    int b2 = stoi(b1);
    cout <<b+b2;
    cin.get();
    cin.ignore();
    return 0;
}