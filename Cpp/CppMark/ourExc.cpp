#include <iostream>
#include <cstdlib>
#include <stdexcept>

using namespace std;

void f()
{
    
//    throw "it's an exception";//unhandled exception - необработанное исключение
    
    try
    {
        throw 1;
        throw "myException occurred";
        
    }
    catch(const char *message)// если в try вызывались функции - освободится память и мы перейдем к catch
    {
        cout << "error: " << message << endl;
    }
    catch(int i)
    {
        cout << "Error. wrong num is: " << i << endl;
    }
    catch(...)// catch all
    {
        cout << "else" << endl;
    }
}
/*
int main()
{
    f();
    
    return 0;
}*/
// logic_error - сами можем исправить!!!
// runtime тоже есть
// bad_alloc - когда new не может выделить память (catch (bad_alloc& ba){...})
