#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    cin.ignore();
    vector<string> a(n);
    for(int i=0;i<n;i++){
        getline(cin, a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]=="Nemo"){
            string name1= (i==0)? a[n-1] : a[i-1];
            string name2= (i==n-1) ? a[0] : a[i+1];
            cout <<name1<<" and "<<name2;
            break;
        }
    }
    cin.get();
    cin.ignore();
    return 0;
}