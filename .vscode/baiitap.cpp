#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin >> a;
   double kq= sqrt(a);
   double ss =fmod(kq,1);
   if(( ss == 0) && (a%3 ==0) && (a%5 ==1)) cout <<"YES";
   else cout <<"NO";
    cin.get();
    cin.ignore();
    return 0;
}