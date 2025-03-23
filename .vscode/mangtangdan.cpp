#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int m;
    cin >>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin >>a[i];
    }
    for(int i=1;i<m;i++){
        if(a[0]>a[i]){
            swap(a[0],a[i]);
            a[0]=a[i];
        }
    }
    for(int i=0;i<m;i++){
        cout <<a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}