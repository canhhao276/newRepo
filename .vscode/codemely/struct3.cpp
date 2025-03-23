#include<iostream>
#include<string>
using namespace std;
struct student
{
string name;
int age;
void display(){
    cout <<"Name: "<<name<<endl;
    cout <<"Age: "<<age<<endl;
}
void in(){
    cin >>name>>age;
}
};
int main(){
    int n;
    cin >>n;
    student students[100];
    for(int i=0;i<n;i++){
        students[i].in();
    }
    for(int i=0;i<n;i++){
        students[i].display();
    }
    return 0;
}
