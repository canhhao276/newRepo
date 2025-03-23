#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    float a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    float max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    float min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout <<max<<" "<<min;
    return 0;
}