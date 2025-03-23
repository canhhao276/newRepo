#include<iostream>
#include<vector>
using namespace std;
void kiemtra(int n){
    vector<int> binary;
    while(n > 0){
        binary.push_back(n%2);
        n /= 2;
    }
    for(int i=binary.size()-1;i>=0;i--){
        cout <<binary[i];
    }
}
int main (){
    int n;
    cin >>n;
    if(n==0){
        cout <<"0";
    }
    else{
        kiemtra(n);
    }
    cin.get();
    cin.ignore();
    return 0;
}