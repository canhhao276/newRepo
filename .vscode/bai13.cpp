#include<iostream>
using namespace std;
void mang(int n){
    int a[100][100];
    int temp=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                a[i][j] =temp++;
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                    a[i][j]=temp++;
                }
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j]<<" ";
        }
        cout <<endl;
    }
}
int main(){
    int n;
    cin >>n;
    mang(n);
    cin.get();
    cin.ignore();
    return 0;
}