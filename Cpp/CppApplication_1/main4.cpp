#include <iostream>
#include <fstream>
#include <limits.h>

using namespace std;
/*
// к-во аргументов, массив аргументов
int main(int argc, char* argv[]) // если указывать параметры при запуске с консоли, то сюда они и попадут(Пример: ./program_name abc program 1312414 "ewrwerwer rwerpew")
{
    
    cout << "Number of parameters = " << argc << endl;
    
    for(int i=0;i<argc; i++)
    {
        cout << "Param #" << i << ": " << argv[i] << endl;
    }
    
    freopen("pathtoFile","w",stdout);// write to file
    freopen("pathtoFile","r",stdout);// read from file
    
    cerr << "error info" << endl;
    freopen("pathtoFile","w",stderr);// write error stream to file
    
    ifstream datesInput;
    datesInput.open("file.txt");
    
    if(!datesInput.is_open())
    {
        cerr << "File cannot be opened" << endl;
        return -1;
    }
    
    datesInput.ignore(INT_MAX,'\n');// игнорировать следующие символы в строке(к-во символов, после какого символа перестать игнорировать).
    // делать, если уже прочитали из строки то, что нужно, чтобы перейти к следующей
    
    string s;
    while(cin >> s)// после конца потока cin >> s вернет false
    {
    }
    
    int c;// считывать в цикле до EOF
    c = datesInput.get();// считываем сивол из файла. int потому что char только до 256,а символов больше
    (char) c;// вывести символ, а не ASCII код
    
    return 0;
    
}*/