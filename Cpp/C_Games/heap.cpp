#include <iostream>

using namespace std;

int* intOnHeap();
void leak1();
void leak2();
/*
int main()
{
	int* pHeap = new int;
	*pHeap = 10;
	cout << "*pHeap: " << *pHeap << "\n\n";


	int* pHeap2 = intOnHeap();
	cout << "*pHeap2: " << *pHeap2 << "\n\n";

	// int i = 0;
	// while(i<100000000){ leak1(); i++; }

	cout << "Freeing memory pointed to by pHeap.\n\n";
	delete pHeap;

	cout << "Freeing memory pointed to by pHeap2.\n\n";
	delete pHeap2;

	pHeap = 0;
	pHeap2 = 0;

	return 0;
}*/

int* intOnHeap()
{
	int* pTemp = new int(20);
	return pTemp;
}

void leak1()// утечка 1
{
	int* drip1 = new int(30);
	//delete drip1;
}

void leak2()// утечка 2 (потому что ссылка указывает на другой элемент, а первый мы не удалили)
{
	int* drip2 = new int(50);
	//delete drip2;
	drip2 = new int(100);
	delete drip2;
}
