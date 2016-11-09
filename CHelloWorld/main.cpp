/*
 * Author: Roman
 * Name: output console
 */

#include <curses.h>// conio.h
#include <math.h>
#include <iostream>

// directive // замещать ЛЮБОЕ имя cout на этот. объявляем cout в глобальной области
using std::cout;// stream input operator
using std::endl;// to new line

// enter to the program
int main(){

	cout << "Hello, World" << endl;
	cout << "First Name: \t" << "Roman" << endl;
	cout << "Last Name: \t" << "Hee" << endl;
	// std::count << "Last Name: \t" << "Hee" << std::endl;; // the same


	getchar();

	return 0;
}


