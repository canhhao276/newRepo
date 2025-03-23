#include<iostream>
using namespace std;
void tich(int a[],int n){
    int temp=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            temp *=a[i];
        }
    }
    cout <<temp;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    tich(a,n);
    cin.get();
    cin.ignore();
    return 0;
}