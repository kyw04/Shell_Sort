#include <iostream>
#define MAX 10
using namespace std;

void shell_sort(int arr[], int n)
{
	int i, j, k, h;
	for (h = n / 2; h > 0; h /= 2)
	{
		for (i = 0; i < h; i++)
		{
			for (j = i + h; j < n; j += h)
			{
				int temp = arr[j];
				for (k = j; k > h - 1 && arr[k - h] > temp; k -= h) arr[k] = arr[k - h];
				arr[k] = temp;
			}
		}
	}
}
int main()
{
	int arr[MAX] = { 10, 2, 6, 9, 4, 1, 8, 3, 5, 7 };

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	shell_sort(arr, MAX);

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;
	return 0;
}