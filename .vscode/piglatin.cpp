#include<iostream>
#include<string>
using namespace std;
string pigLatin(string n){
    char firstletter = n[0];
    switch(firstletter){
        case 'u': case 'e' : case 'o' : case 'a' : case 'i':
        n +="way";
        break;
        default:
        n.erase(0,1);
        n.push_back(firstletter);
        n +="ay";
        break;
    }
    return n;
}
int main(){
    string n; cin >>n;
    cout <<pigLatin(n);
    cin.get();
    cin.ignore();
    return 0;
}