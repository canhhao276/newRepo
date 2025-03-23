#include<iostream>
using namespace std;
void binaryRectangle(int nRows,int nCols){
    for(int i=1;i<=nRows;i++){
        for(int j=1;j<=nCols;j++){
            if(i==1 || i==nRows || j==1 || j==nCols){
                cout <<"1";
            }
            else cout<<"0";
        }
        cout << endl;
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    binaryRectangle(a,b);
    cin.get();
    cin.ignore();
}