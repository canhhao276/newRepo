#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
bool sochan(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >>n;
    int a[n];
    int chan[n];
    int le[n];
    int demchan=0,demle=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
        if(sochan(a[i])){
            chan[demchan++]=a[i];
        }
        else{
            le[demle++]=a[i];
        }
    }
    sort(chan,chan+demchan);
    sort(le,le+demle,greater<int>());
    for(int i=0;i<demchan;i++){
        cout<<chan[i]<<" ";
    }
    for(int i=0;i<demle;i++){
        cout <<le[i]<<" ";
    }
    cin.get();
    cin.ignore();
    return 0;
}