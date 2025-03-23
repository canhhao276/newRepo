#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string ma;
    string ten,lop,ns;
    float gpa;
};
void nhap(sinhvien &a){
    getline(cin,a.ten);
    cin >>a.lop>>a.ns>>a.gpa;
    a.ma="B20DC0001";
    if(a.ns[1]=='/'){
        a.ns +="0";
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
}

