// CMakeProject2.cpp: определяет точку входа для приложения.
//

#include "CMakeProject2.h"

using namespace std;


int* sorting(int* arr)
{
	int n;
	for (int h = 0; h < 99; h++)
	{
		if (arr[h] > arr[h + 1])
		{
			n = arr[h + 1];
			arr[h + 1] = arr[h];
			arr[h] == arr[h + 1];
		}
	}
	return arr;
}


int summ(int num)
{
	int summ = 0, k = 1;
	while (num > 0)
	{
		summ += num % 10;
		num = num / 10;
	}
	return summ;
}


int main()
{
	int matrix[100][100];
	int max = -1 * INFINITY, min = INFINITY;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			cin >> matrix[i][j];

		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}
	if (summ(max) == summ(min))
	{
		for (int i = 0; i < 100; i++)
		{
			sorting(matrix[i]);
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << "\n";
	}
}
