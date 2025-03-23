#include<iostream>
#include<algorithm>
#include<functional>
#include<iomanip>
using namespace std;
int main(){
    int n,a[10];
    cin >>n;
    int tong=0;
    for(int i=0;i<10;i++){
        cin >>a[i];
    }
    int dem=0;
    for(int i=0;i<10;i++){
        if(a[i] !=0){
            dem++;
        }
    }
    double b,c;
    cin >>b>>c;
    double gk=(b+c)/2;
    double x,y;
    cin >>x>>y;
    double ck=(x+y);
    if((x+y)>10){
        ck=10;
    }
    if((dem+n)<20){
        cout <<"0.0";
    }
    else{
        sort(a,a+10,greater<int>());
        for(int i=0;i<5;i++){
            tong +=a[i];
        }
        double th=(double)tong/5;
    cout <<fixed<<setprecision(1)<<(0.2*th+0.2*gk+0.6*ck);
    }
    cin.get();
    cin.ignore();
    return 0;
}