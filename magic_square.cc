#include <iostream>

using namespace std;

int magic(int **arr, int n)
{
	int x, y;
	int number = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = 0;
		}
	}
	y = 0;
	x = (n - 1) / 2;
	while (true)
	{
		arr[y][x] = number;
		y -= 1;
		x += 1;
		if (number % n == 0)
		{
			x -= 1;
			y += 2;
		}
		else if (y < 0)
			y = n - 1;
		else if (x > n - 1)
			x = 0;

		number += 1;
		if (number == n * n + 1) break;
	}
	return **arr;
}

int main()
{
	int n;
	cin >> n;
	if (n <= 0 || n % 2 == 0) return 0;

	int **arr = new int*[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n];
	}

	magic(arr, n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}