#include<iostream>
using namespace std;
int findapeak(int a[],int low,int high,int n){
    int dem=0;
    if(a[0]>=a[1]){
        return a[0];
    }
    else if(a[n-1]>=a[n-2]){
        return a[n-1];
    }
    else{
        while(low<=high){
            int mid = low+(high-low)/2;
            if(a[mid]>=a[mid+1] && a[mid]>=a[mid-1]){
                dem++;
                return a[mid];
            }
            if(a[mid]<a[mid+1]){
                low=mid+1;
            }
            else if(a[mid]<a[mid-1]){
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int relsut=findapeak(a,0,n-1,n);
    if(relsut==-1){
        cout <<"Not find a peak";
    }
    else{
        cout<<"A peak is: "<<relsut;
    }
    return 0;
}