#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <climits>

using std::cout;
using std::cin;
using std::endl;
using std::ios_base;

void coutBool();
void showGMKBytes();
void showTypesValues();
void calculateBMI();
void seedsOnTheBoard();
void arrayFunc();
void simpleNumbers();

int main()
{
//    setlocale(LC_ALL, "Russian");// change locale to russian
//    coutBool();
//    showGMKBytes();
//    showTypesValues();
//    calculateBMI();
//    seedsOnTheBoard();
//    arrayFunc();
    
    simpleNumbers();
    
    return 0;
}

void coutBool()
{
    int a = 1;
    int b = 2;
    cout << (a>b) << endl;// 0
    cout << (a<b) << endl;// 1
    cout << (a==b) << endl;// 0
}

void showGMKBytes()
{
    const int Size = 1024;
    int gb;
    int mb;
    int kb;
    unsigned long long bytes;
    
    cout << "input number or Gigabytes: ";
    cin >> gb;
    
    mb = gb * Size;
    kb = mb * Size;
    bytes = (unsigned long long) kb * (unsigned long long) Size;
    
    cout << "Gb:    " << gb << endl;
    cout << "Mb:    " << mb << endl;
    cout << "Kb:    " << kb << endl;
    cout << "bytes: " << bytes << endl;
}

void showTypesValues()
{
//    short b;//     2 bytes
//    int a;//       4 bytes ( 4 * 8 = 32. --- 2^32)
//    long c;//      4 bytes
//    long long d;// 8 bytes ( 8 * 8 = 64. --- 2^64 )
    
    int a,b;
    a = 23;
    b = 12;
    
    cout << "a = " << a << ". b = " << b << endl;
    cout << "a + b = " << (a+b) << endl;
    cout << "a - b = " << (a-b) << endl;
    cout << "a * b = " << (a*b) << endl;
    cout << "a / b = " << (a/b) << endl;
    cout << "a % b = " << (a%b) << endl;// 11, because of 23/12 = 1 and 11/12
    
    char c = 'c';// 1 byte
    
    cout << "c = \"" << c << "\"" << endl;
    cout << "int(c) = " << (int)c << endl;
    
    a = static_cast<int>(c);
    cout << "a = " << a << endl;
    
    double d = 12.342;// 8 bytes
    d = 123e-1;// 123*10^(-1) = 12.3
    cout << "d = " << (d=8./3) << endl;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << d << endl;

    float f = 10./3;
    cout.precision(12);// 12 symbols after '.'
    cout << f << endl;
}

void calculateBMI()
{
    cout << "***BMI****\n";
    
    double BMI, height, weight;
    
    cout << "Input your height in cm and weight in kg: ";
    cin >> height >> weight;
    
    height /= 100;
    BMI = weight / (height*height);
    
    cout << "Your BMI: " << BMI << endl;
}

void seedsOnTheBoard()
{
    const int N = 64;
    unsigned long long result = 1, pow = 1;
    
    for(int i=1; i<N; i++)
    {
        for(int j(0); j<i; j++)
        {
            pow *= 2;
        }
        cout << "on the first " << i << " cells we have " << result << " seeds\n";
        result += pow;
        pow = 1;
    }
}

void arrayFunc()
{
    int a[10];
    
    for(int i=0; i<10; i++)
    {
        cout << "Input " << i << " element number: ";
        if(!(cin >> a[i]))
        {
            cin.clear();
            while(cin.get() != '\n')
                cout << "Input " << i << " element number!";
        }
    }
    system("clear");
    
    // source array
    for(int i=0;i<10;i++)
    {
        cout << "a[" << i <<"] = " << a[i] << endl;
    }
    
    int max = a[0], min = a[0];
    for(int i=1;i<10;i++)
    {
        if(max < a[i])
            max = a[i];
        if(min > a[i])
            min = a[i];
    }
    cout << "max: " << max << ", min: " << min << endl;
}

void simpleNumbers()
{
    const int N = 1500;
    
    bool simpleNumbers[N+1];
    
    for(int i=2;i<N+1;i++)
    {
        simpleNumbers[i] = true;
    }
    
    for(int i=2; i<=N; i++)
    {
        if(simpleNumbers[i])
        {
            for(int j=i*i; j<=N; j+=i)
            {
                simpleNumbers[j] = false;
            }
        }
    }
    
    for(int i=2; i<=N+1; i++)
    {
        if(simpleNumbers[i])
            cout << i << endl;
    }
}
