#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// problemm 0
int binarysearch(int a[],int low,int high,int x){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
// problem 2
void khoanggtri(vector<int> &a,int x){
    if(a.empty()){
        cout <<"[-1,-1]";
    }
    else{
        if(binary_search(a.begin(),a.end(),x)==false){
        cout <<"[-1,-1]";
        }
        else{
    auto it2=upper_bound(a.begin(),a.end(),x);
    auto it1=lower_bound(a.begin(),a.end(),x);
    cout <<"["<<it1-a.begin()<<","<<it2-1-a.begin()<<"]";
        }
    }
}
// problem 4
int findaPeak(int a[],int low,int high,int x){
    if(a[0]>a[1]){
        return 0;
    }
    else if(a[x]>a[x-1]){
        return x-1;
    }
    else{
        while(low<=high){
            int mid=low+(high-low)/2;
            if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
                return mid;
            }
            if(a[mid]<a[mid+1]){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
}

int main(){
    
    return 0;
}