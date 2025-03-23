#include<iostream>
using namespace std;
void tonguoc(int n){
    int dem=0;
   
    for(int i=1;i<=n;i++){
        
        
            if(n%i==0){
                dem +=i;
            }
        }
        cout <<dem<< endl;
    }

int main(){
    int n;
    cin>>n;
    int a;
    for (int i=1;i<=n;i++){
        cin>>a;
    tonguoc(a);
    }
    cin.get();
    cin.ignore();
    return 0;
}