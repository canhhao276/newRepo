#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void sort(int a,int b,int c){
    int maxl=max({a,b,c});
    int minl=min({a,b,c});
    cout <<minl<<" "<<a+b+c-minl-maxl<<" "<<maxl;
}
int main(){
    int a,b,c;
    cin >>a>>b>>c;
    sort(a,b,c);
    cin.get();
    cin.ignore();
    return 0;
}