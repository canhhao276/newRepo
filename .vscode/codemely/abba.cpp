#include<string>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int dem=0,temp;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            dem++;
            temp=i;
            break;
        }
    }
    for(int i=0;i<temp;i++){
        if(s[i]=='B' && s[i+1]=='A'){
            dem++;
            break;
        }
    }
    for(int i=temp+2;i<s.length()-1;i++){
        if(s[i]=='B' && s[i+1]=='A'){
            dem++;
            break;
        } 
    }
    if(dem==2){
        cout <<"YES";
    }
    else{
        cout <<"NO";
    }
    return 0;
}