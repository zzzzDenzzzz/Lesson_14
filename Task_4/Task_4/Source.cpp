#include<iostream>
#include<stdio.h>
#include<string.h>
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int MAX_LENGTGH = 256;
	char string_1[MAX_LENGTGH];

	std::cout << "Наберите символы: ";
	gets_s(string_1);
	std::cout << "Исходная строка: ";
	puts(string_1);

	std::cout << "Введите символ: ";
	char s = getchar();

	for (int i = 0; i < strlen(string_1); i++)
	{
		if (string_1[i] == s)
		{
			std::cout << i + 1 << ' ';
		}
	}
		
	return 0;
}