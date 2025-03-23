#include <iostream>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour=0, int initMinute=0, int initSecond=0)
    {
        second =initSecond %60;
        int extraMinute = initSecond /60;
        minute = (initMinute + extraMinute) %60;
        int extraHour =(initMinute+extraMinute) /60;
        hour = (initHour + extraHour) %24;
        //your code here
    }

};

int checkArrivalTime(Time t1, Time t2)
{
    if(t1.hour<t2.hour || (t1.hour==t2.hour && t1.minute <t2.minute) ||
    (t1.hour==t2.hour && t1.minute==t2.minute && t1.second <t2.second)){
        return 1;
    }
    else if(t1.hour>t2.hour || (t1.hour=t2.hour && t1.minute >t2.minute) ||
    (t1.hour==t2.hour && t1.minute==t2.minute && t1.second >t2.second)){
        return -1;
    }
    else{
        return 0;
    }
    //your code here
}

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    
    if(checkArrivalTime(time1, time2) == 1) cout << "1";
    else if(checkArrivalTime(time1, time2) ==-1) cout << "2";
    else cout << "Equal";
    return 0;
}
