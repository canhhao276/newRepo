#include<iostream>
using namespace std;
void tonguoc(int n){
    int dem=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        int b;
        cin >>b;
        for(int j=1;j<=b;j++){
            if(b%j==0){
                dem +=j;
            }
        }
        cout <<dem<< endl;
    }
}
int main(){
    int n;
    tonguoc(n);
    cin.get();
    cin.ignore();
    return 0;
}