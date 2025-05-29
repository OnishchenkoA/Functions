#include "stdafx.h"
#include "functions.h"
#include <iostream>
#include <stdio.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "russian");
	double a, b;
	int x;
	std::cout << "¬ведите первое число: ";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "¬ведите второе число: ";
	std::cin >> b;
	std::cout << std::endl;
	std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> x;
	std::cout << std::endl;
	if (x == 1)
	{
		std::cout << " a + b = " << sum(a, b) << std::endl;
	}
	else if (x == 2)
	{
		std::cout << " a - b = " << diff(a, b) << std::endl;
	}
	else if (x == 3)
	{
		std::cout << " a * b = " << multipl(a, b) << std::endl;
	}
	else if (x == 4)
	{
		std::cout << " a / b = " << division(a, b) << std::endl;
	}
	else if (x == 5)
	{
		std::cout << " 'a' в степени 'b' = " << degree(a, b) << std::endl;
	}
}

