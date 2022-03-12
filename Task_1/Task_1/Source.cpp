#include<iostream>
#include<stdio.h>

int main()
{
	const int MAX_LENGTGH = 256;
	char string[MAX_LENGTGH];

	std::cout << "Input string: ";
	gets_s(string);
	std::cout << std::endl;
	std::cout << "String: " << string << std::endl;
	std::cout << "Occupied length = " << strlen(string) << std::endl;
	std::cout << "Free length = " << MAX_LENGTGH - strlen(string) - 1 << std::endl;
	
	return 0;
}