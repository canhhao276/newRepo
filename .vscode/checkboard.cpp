#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]==j){
                cout <<"Q ";
            }
            else{
                cout <<"* ";
            }
        }
        cout <<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}