#include<iostream>
using namespace std;
bool isZicZac(int *a,int n){
    if(n<2) return false;
    int temp=0;
    for(int i=1;i<n;i++){
        int temp1=0;
        if(a[i]>a[i-1]){
            temp1=1;
        }
        else if(a[i]<a[i-1]){
            temp1=-1;
        } 
        else return false;
        if(temp==temp1){
            return false;
        }
        temp=temp1;
    }
    return true;
}
int main(){

}