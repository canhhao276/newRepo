#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct triangle
{
    int edge1,edge2,edge3;
    triangle(int initEdge1=0,int initEdge2=0, int initEdge3=0)
    {
        edge1=initEdge1;
        edge2=initEdge2;
        edge3=initEdge3;
        // your code here
    }

    double getArea()
    {
        int p=(edge1+edge2+edge3)/2;
        if((edge1+edge2)<edge3 || (edge1+edge3)<edge2 || (edge2+edge3)<edge1){
            return -1;
        }
        else{
            return sqrt(p*(p-edge1)*(p-edge2)*(p-edge3));
        }
        // your code here
    }
};

int main()
{
    int edge1,edge2,edge3;
    cin >> edge1 >> edge2 >> edge3;
    triangle tri(edge1,edge2,edge3);
    double area = tri.getArea();
    if (area == -1) cout << "invalid" << endl;
    else cout << fixed << setprecision(2) << area << endl;
    cin.get();
    cin.ignore();
    return 0;
}
