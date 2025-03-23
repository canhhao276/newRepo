#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char a;
    cin >> a;
    if(isalpha(a)) {
    if(islower(a)) {
        cout <<"The upper case character corresponding to "<<a<<" is "<<(char)toupper(a);
    }
    else {
        cout <<"The lower case character cooresponding to "<<a<<" is "<<(char)tolower(a);
    }
         }
     else { cout <<a<<" is not a letter";
    }

    cin.get();
    cin.ignore();
    return 0;
}