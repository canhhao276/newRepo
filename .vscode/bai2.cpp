#include<iostream>
using namespace std;
void tich(int n){
    int temp=1;
    for(int i=1;i<=n;i++){
        temp *=i;
    }
    cout <<temp<<" ";
    int dem=0;
    while(temp %10 == 0){
        dem++;
        temp /=10;
    }
    cout <<dem;
}

int tong(int a, int b){
    return a + b;
}

int hieu(int a, int b){
    return a - b;
}

int main(){
    int n;
    cin >>n;
    tich(n);
    cin.get();
    cin.ignore();
    return 0;
}