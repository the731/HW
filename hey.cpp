// ConsoleApplication49.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;


int main()
{
	srand(time(NULL));
	const int q = 6;
	int a[q];
	int s[q];
	int *b;
	b = a;
	int sum = 0;
	int min = a[1];
	int max = 0;
	for (int i = 0; i < q; i++)
	{
		*(b + i) = rand() % 101;
	}
	for (int i = 0; i < q; i++)
	{
		cout << *(b + i) << ' ';
	}
	cout << endl;
	for (int i = 0; i < q; i++)
	{
		sum = sum + *(b + i);
	}
	cout << sum << endl;
	for (int i = 0; i < q; i++)
	{
		if (max < b[i])
		{
			max = b[i];
		}
		/*if (min > b[i]) // не работает Q_Q
		{
			min = b[i];
		}*/
	}
	cout << max << endl;
	//cout << min << endl;
	int shift;
	int temp;
	cout << "vvedite chislo na kakoe budet sdvig v massive: ";
	cin >> shift;
	for (int i = 0; i< q - shift; i++)
		{
		temp = b[i + shift];
		b[i+ shift] = b[i];
		b[i] = temp;
		}
	for (int i = 0; i < q; i++)
	{
		cout << b[i] << ' ';
	}
	return 0;
}


