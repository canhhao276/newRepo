#include<iostream>
using namespace std;
struct student
{
   string Name;
   int Age; 
};
int main(){
    student x;
    cin >>x.Name>>x.Age;
    cout <<"Name: "<<x.Name<<endl<<"Age: "<<x.Age;
}
