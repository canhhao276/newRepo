#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string ten;
    getline(cin,ten);
    string n;
    getline(cin,n);
    stringstream ss(ten);
    string word;
    int count = 0;
    while(ss >> word){
        if(word == n){
            count++;
        }
    }
    cout << count <<endl;
}