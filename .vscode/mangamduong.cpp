#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    int temp=0;
    int mangam[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
        if(a[i]<0){
            mangam[temp++]=a[i];
        }
    }
    sort(mangam,mangam+temp,greater<int>());
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            a[i]=mangam[c++];
        }
    }
    int mangduong[n];
    int b=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            mangduong[b++]=a[i];
        }
    }
    sort(mangduong,mangduong+b);
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            a[i]=mangduong[d++];
        }
    }
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}