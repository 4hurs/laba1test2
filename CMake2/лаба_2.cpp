// лаба 2
// 1,2 вариант

#include <iostream>

int main()
{
	unsigned char x, y;
	short i;
	int answer;
	x = 98; // тут может быть любое число от 0 до 255

	setlocale(LC_ALL, "Rus");

	std::cout << "x = 98, введите индекс i-го бита числа, который хотите узнать: \n"; // от 0 до 7 
	std::cin >> i;

	y = int(1 << i);
	answer = ((x & y) >> i);

	std::cout << "\n" << answer << "\n";

}
