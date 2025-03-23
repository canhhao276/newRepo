#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    float a, b, c;
    cin >> a >> b >> c;
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
            if(b*c>0){
                cout <<"phuong trinh vo nghiem";
            }
            else if(c==0){
                cout <<"phuong trinh co 1 nghiem"<< endl;
                cout <<"0.00000";
            }
            else{
                cout <<"phuong trinh co 2 nghiem"<< endl;
                cout <<fixed<<setprecision(5)<<-sqrt(-c/b)<<" "<<sqrt(-c/b);
            }
        } 
    }
    else{
        float delta = b*b-4*a*c;
        if(delta<0){
            cout <<"phuong trinh vo nghiem";
        }
        else{
            if(a*c<0 ||a*b>0){
                if(c==0){
                    cout <<"phuong trinh co 1 nghiem"<< endl;
                    cout <<"0.00000";
                }
                else if(a*c<0 && a*b <0){
                        cout <<"phuong trinh co 2 nghiem"<< endl;
                        cout <<fixed<<setprecision(5)<<-sqrt(((-b+sqrt(delta)))/(2*a))<<" "<<sqrt(((-b+sqrt(delta)))/(2*a));
                    }
                    else if(a*c <0 && a*b >0){
                        cout <<"phuong trinh co 2 nghiem"<< endl;
                        cout <<fixed<<setprecision(5)<<-sqrt(((-b+sqrt(delta)))/(2*a))<<" "<<sqrt(((-b+sqrt(delta)))/(2*a));
                    }
                 else cout <<"phuong trinh vo nghiem";
            }
            else if(delta==0){
                if(b==0 && c==0){
                    cout <<"phuong trinh co 1 nghiem"<< endl;
                    cout <<"0.00000";
                }
                else{
                cout <<"phuong trinh co 2 nghiem"<< endl;
                cout <<fixed<<setprecision(5)<<-sqrt(sqrt(-b/(2*a)))<<" "<<sqrt(sqrt(-b/(2*a)));
                }
            }
            else{
                if(c==0){
                    if(b != 0){
                        cout <<"phuong trinh co 3 nghiem"<<endl;
                        cout <<fixed<<setprecision(5)<<-sqrt(-b/a)<<" "<<"0.00000"<<" "<<sqrt(-b/a);
                    }
                    else{
                        cout <<"phuong trinh co 1 nghiem"<< endl;
                        cout <<"0.00000";
                    }
                }
                else{
                    if(b==0){
                        cout <<"phuong trinh co 2 nghiem"<< endl;
                        cout<<fixed<<setprecision(5)<<-sqrt(-c/a)<<" "<<sqrt(-c/a);
                    }
                    else{
                        cout <<"phuong trinh co 4 nghiem"<< endl;
                        cout <<fixed<<setprecision(5)<<-sqrt(((-b+sqrt(delta)))/(2*a))<<" "<<-sqrt(((-b-sqrt(delta)))/(2*a))<<" "<<sqrt(((-b-sqrt(delta)))/(2*a))<<" "<<sqrt(((-b+sqrt(delta)))/(2*a));
                    }
                }
            }
        }
            }
    cin.get();
    cin.ignore();
    return 0;
}