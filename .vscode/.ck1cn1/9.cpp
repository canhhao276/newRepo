#include<iostream>
using namespace std;
int main(){
    int x_p,y_p,a,b,c;
    cin >>x_p>>y_p>>a>>b>>c;
    if(a*x_p+b*y_p+c==0){
        cout <<"YES";
    }
    else{
        cout <<"NO";
    }
    cin.get();
    cin.ignore();
    return 0;
}