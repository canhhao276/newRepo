#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> v; 
    for(int i=0;i<n;i++){
        int x;
        cin >>x;
        if(x==1){
            int y;
            cin >>y;
            v.push_back(y);
        }
        else if(v.size() != 0){
            v.pop_back();
        }
    }
    if(v.size()==0){
        cout <<"EMPTY";
    }
    else{
        for(int i=0;i<v.size();i++){
            cout <<v[i]<<" ";
        }
    }
    return 0;
}