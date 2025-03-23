#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            sum +=a[i];
        }
    }
    cout <<sum;
    return 0;
}