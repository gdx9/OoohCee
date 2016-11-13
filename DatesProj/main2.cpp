#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

inline void keep_window_open ()
{
	char ch ; cin>>ch ;
}

int main()
{
	/*cout << "Hello, World!\n"
			"Here we go!";
	keep_window_open();
	*/

	/*
	cout << "Input your name: \n";
	string firstName;
	cin >> firstName;
	cout << "Hello, " << firstName << "!\n";
	*/

	/*
	cout << "Input youer name: " << endl;
	string first_name = "???";
	double age = -1.;

	cin >> first_name >> age;
	cout << "Hello, " << first_name << ", you age in months is " << age*12 << endl;

	int n;
	cin >> n;
	cout << "n == " << n
			<< "\nn+1 == " << n+1
			<< "\nn*3 == " << n*3
			<< "\nn+n == " << n+n
			<< "\nn%2 == " << n%2
			<< "\nsqrt(n) == " << sqrt(n)
			<< "\n";

	if( "a" < "B" ){// в алфавитном порядке
		cout << "a<B";
	}else{
		cout << "a>B";
	}
	*/

	/*
	int number_of_words = 0;

	string previous = " ";

	string current;

	while(cin>>current){
		++number_of_words;
		if(previous == current)
			cout << "same words: " << current << '\n'
			<< "after " << number_of_words << '\n';
		previous = current;
	}

	// не начинать свои имена с '_'
	*/
	double x {2.7};
	int y {x};
	char b1 {1000};

	cout << y << ' ' << b1;

	int val1,val2;
	cout << "Write two values\n";
	cin >> val1 >> val2;

	if(val1 > val2){
		cout << val1 << " is bigger than " << val2 << '\n';
	}else{
		cout << val2 << " is bigger than " << val1 << '\n';
	}

	cout << "sum is " << val1+val2 << '\n';
	cout << "minus is " << val1-val2 << '\n';

	//constexpr int max = 17;// константное выражение


	return 0;
}
