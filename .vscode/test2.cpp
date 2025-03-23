#include<iostream>
#include<cmath>
#include<map>
using namespace std;
int findLHS(int a[],int n){
    map <int,int> dem;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        dem[a[i]]++;
    }
    int temp=0;
    for(int i=0;i<n;i++){
        temp=max(temp,dem[a[i]]+dem[a[i]+1]);
        temp=max(temp,dem[a[i]]+dem[a[i]-1]);
        }
    return temp;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    cout <<findLHS(a,n);
    cin.get();
    cin.ignore();
    return 0;
}