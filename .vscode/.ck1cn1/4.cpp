#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin >>a>>b;
    if(a.size()>b.size()){
        cout <<"1";
    }
    else if(a.size()<b.size()){
        cout <<"-1";
    }
    else{
        for(size_t i=0;i<a.size();i++){
            if(a[i]>b[i]){
                cout <<"1";
            }
            else if(a[i]<b[i]){
                cout <<"-1";
            }
        }
        cout <<"0";
    }
    cin.get();
    cin.ignore();
    return 0;
}