#include<iostream>
using namespace std;
int main(){
    int n,tong;
    cin >>n;
    int t100 =n/100;
    int t5=(n-t100*100)/5;
    int t1=(n-t100*100-t5*5);
    tong=t100+t5+t1;
    cout <<"100"<<" "<<t100<<endl<<"5"<<" "<<t5<<endl<<"1"<<" "<<t1<<endl;
    cout <<tong;
    return 0;
}