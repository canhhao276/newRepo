#include<iostream>
using namespace std;
int main(){
    int m;
    cin >>m;
    int a[m][3];
    for(int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            cin >>a[i][j];
        }
    }
    int dem=0;
    for(int i=0;i<m;i++){
        if(a[i][0]==0 && a[i][1]>30 && a[i][2]==1){
            dem++;
        }
    }
    cout <<dem;
    cin.get();
    cin.ignore();
    return 0;
}