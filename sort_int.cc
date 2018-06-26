#include <iostream>

using namespace std;

int sort_int(int *arr, int n)
{
	int temp;

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	return *arr;
}

int main()
{
	int n, k;
	cin >> n;
	if (n < 1) return 0;

	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		arr[i] = k;
	}

	sort_int(arr, n);

	for (int j = 0; j < n; ++j)
	{
		cout << arr[j] << " ";
	}

	delete[] arr;

	return 0;
}