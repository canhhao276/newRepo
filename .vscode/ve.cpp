#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int dem=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            dem ++;
            cout<<dem<<" ";
        }
        cout << endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}