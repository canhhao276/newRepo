#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int q;
    cin >>q;
    int b[q][2];
    for(int i=0;i<q;i++){
        for(int j=0;j<2;j++){
            cin >>b[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int temp=0;
        for(int j=b[i][0];j<=b[i][1];j++){
            temp +=a[j];
        }
        cout <<temp<<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}