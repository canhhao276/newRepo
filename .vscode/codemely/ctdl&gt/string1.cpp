#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >>n;
    string s=to_string(n);
    if(s.size()%2==0){
        cout<<"NOT FOUND"<<endl;
    }
    else{
        cout <<s[s.size()/2];
    }
    return 0;
}