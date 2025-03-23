#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
// problem1
string daonguoc(string s){
    vector<char> s1;
    for(int i=s.length()-1;i>=0;i--){
        s1.push_back(s[i]);
    }
    return string(s1.begin(),s1.end());
}
// problem 3
int gcd(int m,int n){
    if(n==0){
        return m;
    }
    else{
        return gcd(n,m%n);
    }
}
// problem 5
double sum(vector<double> &a){
    sort(a.begin(),a.end());
    return a[0]+a[a.size()-1];
}
// problem 2
struct Point {
    double x, y;
};

struct Line {
    double a, b, c;

    Line(Point p1, Point p2) {
        a = p2.y - p1.y;
        b = p1.x - p2.x;
        c = p2.x * p1.y - p1.x * p2.y;
    }
};

void findIntersection(Line l1, Line l2) {
    double determinant = l1.a * l2.b - l2.a * l1.b;

    if (determinant == 0) {
        if (l1.a * l2.c == l2.a * l1.c && l1.b * l2.c == l2.b * l1.c) {
            cout << "MANY" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        double x = (l2.b * l1.c - l1.b * l2.c) / determinant;
        double y = (l1.a * l2.c - l2.a * l1.c) / determinant;
        cout << x << " " << y << endl;
    }
}
// problem 4
void Sort(vector<int> &b,int k){
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(b[j]>b[j+1]){
                swap(b[j],b[j+1]);
            }
        }
    }
}
int main(){
    string s;
    getline(cin,s);
    cout <<daonguoc(s)<<endl;
    int m,n;
    cin >>m>>n;
    cout <<gcd(m,n)<<endl;
    vector<double> a(5);
    for(int i=0;i<5;i++){
        cin >>a[i];
    }
    cout <<sum(a)<<endl;
    Point A,B,C,D;
    cin >>A.x>>A.y>>B.x>>B.y>>C.x>>C.y>>D.x>>D.y;
    Line AB(A,B);
    Line CD(C,D);
    findIntersection(AB,CD);
    int k;
    cin >>k;
    vector<int> b(k);
    for(int i=0;i<n;i++){
        cin >>b[i];
    }
    Sort(b,k);
    for(int i=0;i<n;i++){
        cout <<b[i]<<" ";
    }
    return 0;
}