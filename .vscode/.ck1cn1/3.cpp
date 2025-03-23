#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,w,h;
    cin >>n>>w>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    double temp=(double)sqrt(w*w+h*h);
    for(int i=0;i<n;i++){
        if(a[i]>temp){
            cout <<"NE"<<endl;
        }
        else{
            cout <<"DA"<<endl;
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}