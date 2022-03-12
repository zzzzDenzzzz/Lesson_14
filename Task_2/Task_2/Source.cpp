#include<iostream>
#include<stdio.h>
#include<string.h>
#include<Windows.h>

void rangeString(int &m, int &n)
{
	std::cout << "Укажите m:";
	std::cin >> m;
	std::cout << "Укажите n:";
	std::cin >> n;
}

void copyString(char *string_1, char *string_2, int &m, int &n)
{
	for (int i = m - 1, j = 0; i <= n; i++, j++)
	{
		if (i != n)
		{
			string_2[j] = string_1[i];
		}
		else
		{
			string_2[j] = '\0';
		}
	}
}

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

	int m, n;
	rangeString(m, n);
	if (m - 1 < 0 || n > strlen(string_1))
	{
		std::cout << "Ошибка!!!\n";
	}
	else
	{
		char *string_2 = new char[strlen(string_1) + 1];
		copyString(string_1, string_2, m, n);
		std::cout << "Новая строка: ";
		puts(string_2);

		delete[]string_2;
	}
	
	return 0;
}