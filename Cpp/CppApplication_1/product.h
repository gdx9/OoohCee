#ifndef PRODUCT_H
#define PRODUCT_H

#include <sstream>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

class Product
{
protected:// for this class and all children
    int id;
    string maker;
    string model;

public:

    Product(int id, const string& maker, const string& model) :
        id(id), maker(maker), model(model)
    {
        cout << "Product const" << endl;
    }	

    virtual ~Product()// без virtual у детей будет выззываться только этот деструктор, без своего
    {
        cout << "Product destructor" << endl;
    }

    string getMaker() const
    {
        return maker;
    }
    void setMaker(const string& maker)
    {
        this->maker = maker;
    }

    string getModel() const
    {
        return model;
    }

    void setModel(const string& model)
    {
        this->model = model;
    }
    
    // без virtual все дети будут иметь ТОЛЬКО ЭТОТ метод, не переопределенный
    virtual string getInfo() const = 0;// метод const = 0 сделает данный класс абстрактным. Потомки ОБЯЗЫНЫ его переопределить
    // сдесь указывать реализацию такого метода нельзя!
    // Но можно ниже !!!!
    
};

string Product::getInfo() const
{
    ostringstream oss;
    oss << "Id: " << id << endl;
    oss << "Maker: " << maker << endl;
    oss << "Model: " << model << endl;
    return oss.str();
}

class Computer : public Product// all methods are copied
{
protected:
    int hdd;// hdd size in Gb
    float cpu;// processor cpu GHz
    
public:
    Computer(int id, const string& maker, const string& model,
            int hdd, float cpu) :
    Product(id, maker, model),// parent constructor
        hdd(hdd), cpu(cpu)
    {
        cout << "Comp const" << endl;
    }
    
    ~Computer()
    {
        cout << "Comp destructor" << endl;
    }
    
    int getHdd() const
    {
        return hdd;
    }
    void setHdd(const int hdd)
    {
        this->hdd = hdd;
    }

    float getCpu() const
    {
        return cpu;
    }
    void setCpu(const float cpu)
    {
        this->cpu = cpu;
    }
    
    string getInfo() const
    {
        ostringstream oss;

        oss << Product::getInfo();
//            oss << "Id: " << id << endl;
//            oss << "Maker: " << maker << endl;
//            oss << "Model: " << model << endl;
        oss << "HDD: " << hdd << endl;
        oss << "CPU: " << cpu << endl;
        return oss.str();
    }
    
};

class Printer : public Product
{
public:
    enum Type {MATRIX, INKJET, LASER, SUBLIM};
    
protected:
    bool color;
    Type type;
    string resolution;
    char* commentary;
    
public:
    Printer(int id, const char* maker, const char* model,
            bool color, Type type, const char* resolution,
            const char* commentary_) :
        Product(id,maker,model),
        color(color),type(type), resolution(resolution)
    {
        if(commentary_ == NULL)
            commentary = NULL;
        else
        {
            int len = strlen(commentary_);
            commentary = new char[len+1];
            strcpy(commentary,commentary_);
        }
        cout << "printer const" << endl;
    }
    
    ~Printer()
    {
        cout << "printer destructor" << endl;
        delete[] commentary;
    }

    string getInfo() const
    {
        ostringstream oss;
        oss << Product::getInfo();
        oss << "color: " << (color ? "yes" : "no") << endl;
        oss << "type: ";
        switch(type)
        {
            case MATRIX: oss << "matrix"; break;
            case INKJET: oss << "inkjet"; break;
            case LASER: oss << "laser"; break;
            case SUBLIM: oss << "sublimation"; break;
        }
        oss << endl;
        oss << "resolution: " << resolution << endl;
        return oss.str();// ostringstream to string
    }
    
};



#endif /* PRODUCT_H */

