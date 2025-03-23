#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour=0, int initMinute=0, int initSecond=0)
    {
        hour=initHour;
        minute=initMinute;
        second=initSecond;
        //your code here
    }
    void getTimeDifference(Time other)
    {
        int time1 = hour*3600+minute*60+second;
        int time2=other.hour*3600+other.minute*60+other.second;
        int hieu=abs(time2-time1);
        int gio=hieu/3600;
        int phut =(hieu%3600)/60;
        int giay=(hieu%3600)%60;
        cout <<setw(2)<<setfill('0')<<gio<<":"
             <<setw(2)<<setfill('0')<<phut<<":"
             <<setw(2)<<setfill('0')<<giay;
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    time1.getTimeDifference(time2);
    
    return 0;
}
