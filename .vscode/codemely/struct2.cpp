#include<bits/stdc++.h>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
    void nhap(){
        cin >>name>>age>>score;
    }
    bool operator < (const student other){
        return score<other.score;
    }
};
int main(){
    int n;
    cin >>n;
    student *students = new student[100];
    student a[n];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
    sort(a,a+n);
    cout << "Name: " <<a[n-1].name<<endl<<"Age: "<<a[n-1].age<<endl<<"Score: "<<a[n-1].score;
    delete[] students;
    return 0;
}
