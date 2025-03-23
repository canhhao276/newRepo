#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int max=a[2]-a[0];
    for(int i=0;i<n-2;i++){
        if((a[i+2]-a[i])>max){
            max=a[i+2]-a[i];
        }
    }
    cout <<max;
    cin.get();
    cin.ignore();
    return 0;
}