#ifndef OUTTIME_H
#define OUTTIME_H

#include <iostream>

typedef unsigned int ui;

class ourTime
{
private:
    ui seconds;
    ui minutes;
    ui hours;
public:
    ourTime(void);
    ourTime(ui);
    ourTime(ui,ui,ui);
    
    ourTime operator+(const ourTime&) const;
    void operator<<(std::ostream&);
    friend std::ostream& operator<<(std::ostream&, const ourTime&);
    
    ~ourTime(void);
};

#endif /* OUTTIME_H */

