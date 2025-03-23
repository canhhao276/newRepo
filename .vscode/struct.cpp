#include <iostream>
using namespace std;

struct fraction{
    int numerator, denominator;
    fraction (int _numerator=0, int _denominator=0){
        // them code cua ban o day
        numerator=_numerator;
        denominator=_denominator;
    }
    void in(){
        cout <<numerator<<"/"<<denominator;
    }
};

fraction addconst (const fraction &a, const fraction &b){
    // them code cua ban o day
    if(b.denominator % a.denominator==0){
        return fraction(a.numerator*(b.denominator/a.denominator)+b.numerator,b.denominator);
    }
    else if(a.denominator % b.denominator==0){
        return fraction(b.numerator*(a.denominator/b.denominator)+a.numerator,a.denominator);
    }
    else {
    return fraction(a.numerator*b.denominator+a.denominator*b.numerator,a.denominator*b.denominator);
    } 
    
}

int main() {
    // them code cua ban o day
    fraction a,b;
    cin >>a.numerator>>a.denominator>>b.numerator>>b.denominator;
    fraction c= addconst(a,b);
    if((a.denominator==b.denominator) && (a.numerator+b.numerator)==a.denominator ){
        cout <<1<<"/"<<1;
    }
    c.in();
}
