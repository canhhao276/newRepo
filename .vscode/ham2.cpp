#include<iostream>
#include<iomanip>
using namespace std;
double calculate(double num1,char operat,double num2){
    double num;
    if(operat ='+'){
        num=num1+num2;
    }
    if(operat='-'){
        num=num1-num2;
    }
    if(operat='*'){
        num=num1*num2;
    }
    if(operat='/'){
        num=num1/num2;
    }
    return num;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout <<fixed<<setprecision(2)<<calculate(a,b,c);
    cin.get();
    cin.ignore();
}