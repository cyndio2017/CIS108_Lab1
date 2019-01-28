// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char first_name[101];
	char last_name[101];
	int age;
	int confidence;
    std::cout << "Enter your first name\n";
	std::cin >> first_name;
	std::cout << "Enter your last name\n";
	std::cin >> last_name;
	std::cout << "Enter your age\n";
	std::cin >> age;
	int dog_age = age * 7;
	std::cout << "Enter your confidence in programmers in percentage (0-100)\n";
	std::cin >> confidence;
	std::cout << "Hello "<<first_name<<" "<<last_name<<", nice to meet you! You might be "<<age<<" in human years, but in dog years you are "<<dog_age<<".\n";
	double confidence_level = static_cast<double>(confidence / 100.0);
	if (confidence_level < 0.5) {
		std::cout << "I agree, programmers can't be trusted!;";
	}
	else {
		std::cout << "Writing good code takes hard work!;";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
