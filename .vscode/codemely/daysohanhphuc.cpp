#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    cout <<n<<" ";
    while(n != 1){
        if(n%2==0){
            cout <<n/2<<" ";
            n=n/2;
        }
        else{
            cout <<n*3+1<<" ";
            n=n*3+1;
        }
    }
    return 0;
}