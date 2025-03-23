#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x_A,y_A,x_B,y_B,x_C,y_C,x_D,y_D;
    cin >>x_A>>y_A>>x_B>>y_B>>x_C>>y_C>>x_D>>y_D;
    if((x_B-x_A)==(x_D-x_C) && (y_B-y_A)==(y_D-y_C)){
        cout <<"yes";
    }
    else{
        cout <<"no";
    }
    cin.get();
    cin.ignore();
    return 0;
}