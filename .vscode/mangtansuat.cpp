#include<iostream>
using namespace std;
int main(){
    int dem[100000]={0};
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        dem[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(dem[a[i]] !=0){
        cout<<a[i]<<" "<<dem[a[i]]<<endl;
        dem[a[i]]=0;
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}