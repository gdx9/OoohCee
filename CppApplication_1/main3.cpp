#include <iostream>
#include <string>

using namespace std;

enum Gender {MALE,FEMALE};

class Student
{
private:
    string name;
    int age;
    float finighPercents;
    Gender studGender;
    
    
public:
    
    Student(string name, int age, float finighPercents,
        Gender studGender)
    {
        this->name = name;
        this->age = age;
        this->finighPercents = finighPercents;
        this->studGender = studGender;
    }
    
    void studIntroduce();
    void sayHello();
    
    int getAge() const {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    float getFinighPercents() const {
        return finighPercents;
    }

    void setFinighPercents(float finighPercents) {
        this->finighPercents = finighPercents;
    }

    string getName() const {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    Gender getStudGender() const {
        return studGender;
    }

    void setStudGender(Gender studGender) {
        this->studGender = studGender;
    }
/*
    string[] getLanguages() {
        return languages;
    }

    void setLanguages(string[] languages) {
        this->languages = languages;
    }*/

};

void Student::sayHello()
{
    cout << "Hello, my name is " << name;
}

void Student::studIntroduce()
{
    cout << "Hello, my name is " << name << '.'
            << " I'm " << age << " years old.";
}


void showStrArr(string* langs, int langCnt)
{
    string langLine;
    for(int i=0;i<langCnt; i++)
    {
        langLine += langs[i] + ',';
    }
    langLine.pop_back();
    
    cout << langLine;
}
/*
int main()
{
    Student anna("Anna", 17, 12.1, FEMALE);
    anna.sayHello();
    
    cout << '\n';
    
    anna.studIntroduce();
    cout << endl;
    
    string annaLangs[] = {"Russian", "Ukrainian", "English", "French"};
    int langCnt = sizeof(annaLangs)/sizeof(string);
    showStrArr(annaLangs,langCnt);
    
    return 0;
}*/

