#include <iostream>
#include <cmath>

using namespace std;

struct Employee
{
    char *name;
    double salary;
    int countAbsence;
};
void inputEmp(Employee *e);
void deleteEmp(const Employee *e);
void freeEmp(Employee e[], int n);


struct XY
{
    double x;
    double y;
};
struct Polar
{
    double distance;
    double angle;
};
void showPolar(const Polar &p);
Polar convertToPolar(const XY &xy);

/*
int main()
{
//    Employee john{"John", 2032.0, 3};
//    john.name = "John Simpson";
//    john.salary = 2292;
//    john.countAbsence = 3;
//    cout << john.name;
//    
//    Employee e[4];
//    for(int i{0}; i<4; i++)
//    {
//        cout << i+1 << " employee: " << endl;
//        inputEmp(&e[i]);
//    }
//    for(int i{0}; i<4; i++)
//    {
//        deleteEmp(&e[i]);
//    }
//    freeEmp(e, 4);
    
    XY a;
    Polar b;
    
    a.x = 10;
    a.y = 17;
    
    b = convertToPolar(a);
    
    showPolar(b);
    
    return 0;
}
*/

void inputEmp(Employee *e)
{

    e->name = new char[20];
    
    cout << "enter employee name: " << endl;
    cin.get();// потому что первый Enter завершит ввод
    cin.getline(e->name, 20);
    
    cout << "enter count of absences: ";
    cin >> e->countAbsence;
    cout << endl;
}

void deleteEmp(const Employee *e)
{
    if(e->countAbsence > 5)
    {
        cout << "delete an employee: " << e->name << endl;
    }
}

void freeEmp(Employee e[], int n)
{
    for(int i{0}; i<n; i++)
    {
        delete [] e[i].name;
    }
}

void showPolar(const Polar &p)
{
    const double degree = 57.29577;
    
    cout << "distance: " << p.distance << endl;
    cout << "angle: " << p.angle * degree << endl;
}

Polar convertToPolar(const XY &xy)
{
    Polar p;
    
    p.distance = sqrt(xy.x*xy.y + xy.y*xy.y);
    p.angle = atan2(xy.x, xy.y);
    
    return p;
}