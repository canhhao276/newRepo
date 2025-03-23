#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin >>n>>r;
    int dem=1;
    while((((dem*n)%10) != r) && 
    (((dem*n)%10) != 0) ){
        dem++;
    }
    cout <<dem;
    cin.get();
    cin.ignore();
    return 0;
}