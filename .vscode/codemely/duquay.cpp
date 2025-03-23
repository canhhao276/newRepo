#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    long long x;
    cin >>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int dem=0,left=0,right=n-1;
    sort(a.begin(),a.end());
    while(left<=right){
        if((a[right]+a[left]) <= x){
            left++;
        }
        right--;
        dem++;
    }
    cout <<dem;
    return 0;
}