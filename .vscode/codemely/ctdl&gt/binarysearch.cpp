#include<iostream>
using namespace std;
int binarysearch(int a[],int low,int high,int x){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]<x){
            low=mid+1;
        }
        else{
            low=mid-1;
        }
    }
    return -1;
}
int main(){
    int a[]={2,3,4,10,40};
    int x=10;
    int n=sizeof(a)/sizeof(a[0]);
    int relsut=binarysearch(a,0,n-1,x);
    if(relsut==-1){
        cout<<"Elemen is not present in array";
    }
    else{
        cout <<relsut;
    }
    return 0;
}