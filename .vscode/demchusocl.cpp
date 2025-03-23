#include<iostream>
using namespace std;
void demso(int n){
    int demle=0, demchan=0;
    while(n>0){
        if((n-n/10)%2==0){
            demchan++;
        }
        else demle++;
        n /=10;
    }
    cout<<demchan<< endl <<demle<< endl;
}
int main(){
    int n;
    cin >> n;
    int a;
    for(int i=1;i<=n;i++){
        cin >>a;
        demso(a);
    }
    return 0;
}