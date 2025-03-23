#include <iostream>
#include <string>

using namespace std;

struct SinhVien{
    string name;
    int tuoi;
    int khoa;
};

SinhVien sinhvien[100];



int main(){
    for(int i = 0; i < 100; i++){
        sinhvien[i].name = "id" + to_string(i);
        sinhvien[i].tuoi = i;
        sinhvien[i].khoa = 65;
    }
    cout << sinhvien[5].name << endl;
    cout << sinhvien[4].tuoi << endl;
    return 0;
}

