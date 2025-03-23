#include<iostream>
using namespace std;
int kiemtra(int a,int b,int c){
    int dem=0;
    for(int i=a;i<=b;i++){
        dem +=i;
    }
    return dem%c;
}
int main(){
    int a,b,c;
    cin >>a >>b >>c;
    cout <<kiemtra(a,b,c);
    cin.get();
    cin.ignore();
    return 0;
}