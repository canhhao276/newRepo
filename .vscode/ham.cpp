#include<iostream>
using namespace std;
bool ngto(int n){
    int uoc =0;
    for(int i=1;i<=n;i++){
        if(n%i ==0){
            uoc++;
        }
        if(uoc == 2) return true;
        else return false;
    }
}
int main(){
    int n;
    cin >> n;
    if(ngto(n) == true ){
        cout << 1 << endl;
    }
    else cout <<0<< endl;
    cin.get();
    cin.ignore();
}