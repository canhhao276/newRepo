#include<iostream>
using namespace std;
void demso(int n){
    int dem=0;
    while(n>0){
        int b= n%10;
        if(b==2 || b==3 || b==5 || b==7)
        dem++;
        n /=10;
    }
    cout <<dem<< endl;
    }
int main(){
    int n;
    cin >> n;
    int a;
    for(int i=1;i<=n;i++){
        cin >>a;
        demso(a);
    }
    cin.get();
    cin.ignore();
    return 0;
}