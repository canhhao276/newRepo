#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    float a, b, c;
    cin >> a >> b >> c;
    float delta =b*b-4*a*c;
    if(a==0){
        if(b==0){
            if(c==0){
                cout <<"phuong trinh co vo so nghiem";
            }
            else{
                cout <<"phuong trinh vo nghiem";
            }
        }
        else{
            cout <<"phuong trinh co 1 nghiem"<<endl;
        cout <<fixed<<setprecision(5)<<-c/b;
        }
    }
    else{
        if(delta <0){cout <<"phuong trinh vo nghiem";
        }
        else if(delta==0){
            cout <<"phuong trinh co 1 nghiem"<<endl;
            if(b==0){
                cout <<"0.00000";
            }
            else cout <<fixed<<setprecision(5)<<-b/(2*a);
        }
        else{
            cout <<"phuong trinh co 2 nghiem"<< endl;
            cout <<fixed<<setprecision(5)<<((-b-sqrt(delta))/(2*a))<<" "<<((-b+sqrt(delta))/(2*a));
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}