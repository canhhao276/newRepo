#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    int m,n;
    cin >>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >>a[i][j];
        }
    }
    int x;
    cin >>x;
    if(x>n-1){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j];
        }
    }
    }
    int temp=0,mang[n];
    for(int i=0;i<n;i++){
        mang[temp++]=a[i][x-1];
    }
    temp=0;
    sort(mang,mang+temp,greater<int>());
    for(int i=0;i<n;i++){
        a[i][x-1]=mang[temp++];
    }
    for(int i=0;i<n;i++){
        cout <<a[i][x-1]<<" ";
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j];
        }
        cout <<endl;
    }  
    cin.get();
    cin.ignore();
    return 0;
}