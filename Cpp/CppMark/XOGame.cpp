#include <cstdlib>
#include <iostream>

using namespace std;
/*
char name1[30];
char name2[30];
char table[3][3];
    //00 01 02
    //10 11 12
    //20 21 22
bool step;


void introduction()
{
     cout << "Welcome to XO game!" << endl;

    int l = 0;
    
    for(int i{0}; i<3; i++)
    {
        for(int j{0}; j<3; j++)
        {
            cout << "| " << l+1 << ' ';
            table[i][j] = char(49+1);// fill the table 1|2||3|4|5|6|7|8|9
            l++;
        }
        cout << '|';
        cout << endl;
    }
}

bool input()
{
    for(int i(0); i < 3; i++)
    {
        for(int j(0); j < 3; j++)
        {
            cout << "| " << table[i][j] << ' ';
        }
        
        cout << '|';
        cout << endl;
    }

    cout << endl;
    
    if(step)
        cout << "Move of " << name1  << " : ";
    else
        cout << "Move of " << name2 << " : ";

    int n;
    cin >> n;
    if(n < 1 || n > 9)
        return false;
    
    int i,j;

    if(n%3 == 0)
    {
        i = n/3-1;
        j = 2;
    }
    else
    {
        j = n%3-1;
        i = n/3;
    }

    if(table[i][j] == 'O' || table[i][j] == 'X')
        return false;

    if(step)
    {
        table[i][j] = 'X';
        step = false;
    }
    else
    {
        table[i][j] = 'O';
        step =true;
    }
    
    return true;
}

bool win()
{
//    for(int i(0); i < 3; i++)
//        if((table[i][0] == table[i][1]) && (table[i][0] == table[i][2]))
//            return true;
//        else if((table[0][i] == table[1][i]) && (table[0][i] == table[2][i]))
//            return true;
//        else if((table[0][0] == table[1][1] && table[0][0] == table[2][2])
//                || (table[0][2] == table[1][1] && table[0][2] == table[2][0]))
//            return true;

    return false;
}


int main()
{
    introduction();
    
    system("clear");
    int i = 0;
    
    cout << "Input name of player1: ";
    cin.getline(name1,30);
    cout << "Input name of player2: ";
    cin.getline(name2,30);
    
    srand(time(NULL));
    
    if(rand() & 1)// n%2 ==== n&1
        step = true;
    else
        step = false;
    
    while(!win())
    {
        if(i == 9)
        {
            cout << "noone win" << endl;
            return -1;
        }
        system("clear");
        if( !input() )
        {
            cout << "write one more time!";
        }
        i++;
    }
    
    system("clear");
    if(step)
        cout << "Winner is: " << name2 << endl;
    else
        cout << "Winner is: " << name1 << endl;

    return 0;
}
*/