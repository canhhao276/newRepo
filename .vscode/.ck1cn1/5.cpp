#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string tong(string a,string b){
    if(a.length()<b.length()){
        swap(a,b);
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string kq ="";
    int carry=0;
    for(size_t i=0;i<a.size();i++){
        int digitA=a[i]-'0';
        int digitB=(i<b.size() ? b[i]-'0' : 0);
        int sum=digitA+digitB+carry;
        carry=sum/10;
        kq+=(sum%10)+'0';
    }
    reverse(kq.begin(),kq.end());
    return kq;
}
int main(){
    string a,b;
    cin >>a>>b;
    cout <<tong(a,b);
    cin.get();
    cin.ignore();
    return 0;
}