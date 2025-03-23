#include <iostream>
using namespace std;

struct date{
    int day, month, year;
    date(int day1, int month1, int year1){
        day=day1;
        month=month1;
        year=year1;
    }
    void in(){
        cin >>day>>month>>year;
    }
};

///Hàm tính và trả về ngày kế tiếp của ngày hiện tại
///Hàm không làm thay đổi giá trị của ngày hiện tại
date getNextDay(const date &c){
    // them code cua ban o day
    int daynew =c.day+1;
    return date(daynew,c.month,c.year);
    
}

int main() {
    // them code cua ban o day
    date c(0,0,0);
    c.in();
    date nextday =getNextDay(c);
    cout<<nextday.day<<"/"<<nextday.month<<"/"<<nextday.year<<"/";
}
