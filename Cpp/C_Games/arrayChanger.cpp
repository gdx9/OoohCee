#include <iostream>
#include <array>

using namespace std;

void makeBigger( int* const array, int size )
{
	for(unsigned int i=0; i<size; i++)
	{
		array[i] += 103;
	}
}

void showArrayElements( const int* const array, int size )
{
	for(unsigned int i=0; i<size; i++)
	{
		cout << array[i] << endl;
	}
}
/*
int main()
{
	int highScores[7] = {5000,3800,2200};
	int highScoreSize = sizeof(highScores) / sizeof(highScores[0]);

	showArrayElements(highScores, highScoreSize);

	makeBigger(highScores,highScoreSize);
	cout << "Changed!!!\n" << endl;

	showArrayElements(highScores, highScoreSize);

	return 0;

}*/
