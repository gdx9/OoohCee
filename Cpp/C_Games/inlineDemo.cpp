#include <iostream>

int radiation(int health);

using namespace std;

/*
int main()
{
	int health = 80;
	cout << "Your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";

	return 0;

}*/

// inline приказывает компилятору скопировать функцию в вызывающий код.
// так экономятся ресурсы на вызов кода из другого участка.
// это плохо, если функция используется несколько раз.
// если компилятор решит, что inline скажется негативно - он его проигнорирует
inline int radiation(int health)
{
	return (health / 2);
}
