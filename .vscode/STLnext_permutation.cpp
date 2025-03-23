#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> perm(n);
    for(int i=0;i<n;i++){
        cin >>perm[i];
    }
    if(next_permutation(perm.begin(),perm.end())){
        for(int i=0;i<n;i++){
            cout <<perm[i]<<" ";
        }
    }
}