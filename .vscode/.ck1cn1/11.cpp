#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<char>> a(n,vector<char>(2*n-1,'E'));
    for(int i=0;i<n;i++){
        a[i][i]='$';
        a[i][2*n-2-i]='$';
    }
    for(int i=0;i<n;i++){
        a[n-i-1][i]='$';
        a[i][n-1+i]='$';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}