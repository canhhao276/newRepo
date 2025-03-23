#include<iostream>
using namespace std;
int main(){
    int m,n,k,q;
    cin >>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    cin >>k>>q;
    if(a[k-1][q-1]==0){
        a[k-1][q-1]=1;
        cout <<"Your seat is booked. Please complete the payment.";
    }
    else {
        cout <<"Seat"<<k<<","<<q<<" is sold."<<endl;
    }
    cin.get();
    cin.ignore();
    return 0;
}