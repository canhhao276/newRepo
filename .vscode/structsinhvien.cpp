#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct Student  {
    // your code goes here
    // Cac bien thanh vien
    string name;
    double gpa;
    Student(string sname=0,double sgpa=0){
        name=sname;
        gpa=sgpa;
    }
    // your code goes here
    // Hai ham khoi tao

    string grade() {
        if(gpa>=3.6){
            return "xuat sac";
        }
        if(gpa>=3.2 && gpa<3.6){
            return "gioi";
        }
        if(gpa>=2.5 && gpa<3.2){
            return "kha";
        }
        else{
            return "khong du dieu kien";
        }
        // your code goes here
    }
    
    void print() {
        cout <<name<<" "<<gpa<<" "<<grade()<<endl;
        // your code goes here
    }
};

Student get(int n) {
    Student a[n];
    for(int i=0;i<n;i++){
        cin >>a[i].name>>a[i].gpa;
    }
    Student temp=a[0];
    for(int i=1;i<n;i++){
        if(temp.gpa<a[i].gpa){
            temp=a[i];
        }
    }
    return temp;
    // your code goes here
}