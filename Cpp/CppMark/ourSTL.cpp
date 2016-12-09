#include <iostream>
#include <string>// работают лучше, чем string.h из обычного C
#include <array>
#include <memory>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <queue>
#include <map>
#include <iterator>

using namespace std;

void showInt(int a)
{
    cout << a << ' ';
}

int main()
{
//    //string str;// ""
//    string str("Hello");
//    string str2(str);// конструктор копирования
//    
//    str.length();// длина строки
//    str.size();// длина строки
//    
//    str.append(" fefe");// add to the end
//    str += " fsfe";// add to the end
//    
//    str.assign(str2);// присваивание
//    
//    str.capacity();// сколько символов НА САМОМ ДЕЛЕ. Символов будет больше чем мы написали
//    
//    str.max_size();// максимальная длина. Больше нее - вылетит исключение
//    
//    str.compare(str2);// сравнивание ПО СИМВОЛАМ. Если равны - 0, str<str2 - -1. str<str2 - 1. Сравниваются ПО КОДИРОВКЕ
//    
//    str.empty();// Если пустая - true
//    
//    str.erase(2);// Удалить, начиная с символа 2(счет от 0)
//    str.erase(2,3);// удалить 3 символа, начиная со 2-го
//    
//    str.find("l");// найти позицию первого вхождения символа
//    str.find_last_of("llo");// поиск с конца(вернет позицию СИМВОЛА 'o')
//    
//    str.swap(str2);// поменять строки местами
//    
//    str.substr(2,3);// вырезать 3 символа, начиная со 2-го
//    
//    getline(cin, str);// ввести строку из клавиатуры. После себя оставляет символ перевода строки, который нужно очищать:
//    //cin.get();/// НЕ ПРАВИЛЬНО, смотреть в другой лабе
//    cout << str << endl;
//    cout << str2 << endl;
//    
//    //////////////
//    
//    array<int,10> arr;// массив из 10 элементов int
//    // array используются почти везде, вместо int a[10]
//    
//    auto_ptr<string> p(new string("sdaasd"));// указатель НА ОБЬЕКТ ДАННЫХ.
//    // Не нужно освобождать память через delete. Работать, как и с указателем *p...
//    auto p1 = p;// 'p1' станет указателем на то, на что указывал 'p', но 'p' ПЕРЕСТАНЕТ СУЩЕСТВОВАТЬ
//    // потому что в auto_ptr на один и тот же объект не могут указывать два указателя
//    
//    shared_ptr<string> s(new string("sdaas"));// почти то же самое, что и auto_ptr, но может быть несколько указателей на 1 объект
//    auto s1 = s;
    
    ////////////////
    ///// STL  /////
    ////////////////
    
    int arr[2] = {1,2};
    //vector<int> a;
    //vector<int> a(10);// with a space for 10 elements
    //vector<int> a(arr,arr+2);// arr+2 указывает область памяти ЗА последним элементом
    vector<int> a(2, 1);// из двух единиц
    
    //for(int i{0}; i<a.size(); i++){...} - можно, но не нужно. Лучше - дальше
    
    for(auto i : a)
    {
        i = 23;// вектор НЕ изменится. Поменяем только внутреннюю переменную
        cout << i << endl;
    }
    for(auto &i : a)
    {
        i = 23;// вектор ИЗМЕНИТСЯ, потому что i - ссылка
        cout << i << endl;
    }
    a.push_back(12);// добавить в конец вектора
    
    
    vector<int>::iterator iter = a.begin();// итератор на 1-й элемент вектора
    iter = a.end();// на последний элемент
    cout << *iter << endl;
    a.erase(a.begin()+1,iter);// очистить (итератор от, итератор до)
    cout << a.size() << endl;
    a.clear();// очистить вектор
    cout << a.size() << endl;
    
    vector<int> b(5,20);
    a.insert(a.end(), b.begin(), b.end());// (начиная с какого места, откуда(из 2-го вектора), до куда(из 2-го вектора))
    for(auto i : a)
    {
        cout << i << endl;
    }
    
    a.resize(2);// оставить только 2 элемента
    
    /// algorithms ///
    
    for_each(a.begin(), a.end(), showInt);// call showInt(int) for each element from a.begin() to a.end()
    cout << endl;
    a.push_back(7);
    //sort(a.begin(), a.end());// сортировка по возрастанию
    sort(a.rbegin(), a.rend());// по убыванию
    for_each(a.begin(), a.end(), showInt);
    
    random_shuffle(a.begin(), a.end());// переставить элементы вразброс
    
    vector<int>::iterator newIter = find(a.begin(), a.end(),7);// присвоить итератору тот элемент, который вернет функция find()
    /////////
    queue<int> q;
    q.push(12);
    
    list<int> l;// двусвязный список быстрее для вставки и для сортировки
    
    set<int> s;// хранит в отсортированном виде ПО ОДНОМУ экземпляре
    // iterator от set не позволяет записывать. Нужен inserter
    
    s.insert(2);
    s.insert(323);
    s.insert(22);
    s.insert(2);
    
    s.erase(2);// удалить тот, что со значением 2
    
    
    
    set<int> s2;
    s2.insert(33); s2.insert(44);
    
    // объединить set,list, queue, vector и другие коллекции
    set_union(s.begin(),s.end(),s2.begin(),s2.end(), inserter(s,s.begin()));// inserter - куда будем записывать(s,начало)
    
    cout << endl << endl;
    for(int i : s)
    {
        cout << i << ' ';
    }
    
    ////////////
    
    cout << endl << endl;
    
    map<int, string> m;
    pair<int, string> p (12, "ccc");
    m.insert(p);
    p.first = 1;
    p.second = "wwww";
    m.insert(p);
    cout << m.at(12) << endl;
    
    auto result = m.find(1);
    cout << (*result).second << endl;
    
    ///////////////////////
    
    /// iterator
    
    list<int> l1(3,5);
    vector<int> v1(10);
    
    v1[0] = 777;
    
    
    //copy(l1.begin(), l1.end(), v1.begin());// копировать l1 в v1, ПЕРЕЗАПИСАВ его значения
    back_insert_iterator<vector<int>> vi(v1);// для записи в конец
    copy(l1.begin(), l1.end(), vi);
    
    
    for(int i : v1)
    {
        cout << i << ' ';
    }
    
    
    
    
    
    
    return 0;
}



