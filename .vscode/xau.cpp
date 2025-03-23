#include <iostream>
#include <string>

using namespace std;

int main () {

   string s,t;
   cin >> s;
   cin >> t;
   int dodai = s.length();
   int dem=0;
   for(int i=0;i<dodai;i++){
   if(s[i]==t[i]){
       dem++;
        }
    }
    cout <<dem;
   return 0;
}