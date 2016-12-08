#include "outTime.h"

ourTime::ourTime(void)
{
    hours = minutes = seconds = 0;
}

ourTime::ourTime(ui sec)
{
    hours = sec / (60*60);
    minutes = sec % (60*60) / 60;
    seconds = sec % (60*60) % 60;
    
}

ourTime::ourTime(ui h, ui m, ui s)
{
    if(h>60 || m>60 || s>60)
    {
        ourTime();
        return;
    }
    
    hours = h;
    minutes = m;
    seconds = s;
}

ourTime ourTime::operator+(const ourTime& t) const
{
    ourTime result;
    result.seconds = (seconds + t.seconds)%60;
    result.minutes = (minutes + t.minutes + (seconds + t.seconds)/60)%60;
    result.hours = (hours + t.hours + (minutes + t.minutes)/60);
    
    return result;
}

//void ourTime::operator<<(std::ostream& os)// вызывать t3 << cout.  cout << t3 - НЕ работает, потому что os
//{
//    os << hours << " : " << minutes << " : " << seconds;
//}

//void operator<<(std::ostream& os, const ourTime& t1)// cout << t1 будет работать, но t1 << ... - нет
std::ostream& operator<<(std::ostream& os, const ourTime& t1)// работает ... << t1 << ...
{
    os << t1.hours << " : " << t1.minutes << " : " << t1.seconds;
    return os;
}


ourTime::~ourTime()
{
    
}
