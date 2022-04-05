#include <string.h>
#include <iostream>
using namespace std;
int j = 0, r = 0;
int arrstore[] = {};
string arr[] = {};

void get_minimum(int arr[], int N)
{
	int min = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << "\nsmallest LCS is: " << min;
}

bool swaper(char str[], int start, int curr)
{
	for (int i = start; i < curr; i++)
		if (str[i] == str[curr])
			return 0;
	return 1;
}
void printPermutations(char str[], int index, int n)
{
	if (index >= n)
	{
		cout << str << "\t";
		arr[j] = str;
		j++;
		return;
	}
	for (int i = index; i < n; i++)
	{
		bool check = swaper(str, index, i);
		if (check)
		{
			swap(str[index], str[i]);
			printPermutations(str, index + 1, n);
			swap(str[index], str[i]);
		}
	}
}

int lowest_common_substring(string X, string Y, int m, int n)
{

	int lcsuff[m + 1][n + 1];
	int result = 0; // To store length of the
	// longest common substring

	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				lcsuff[i][j] = 0;

			else if (X[i - 1] == Y[j - 1])
			{
				lcsuff[i][j] = lcsuff[i - 1][j - 1] + 1;
				result = max(result, lcsuff[i][j]);
			}
			else
				lcsuff[i][j] = 0;
		}
	}
	arrstore[r] = result;
	r++;
	return result;
}

int main()
{
	char string[20];
	int n, k, i, l, m;
	cout << "\nEnter string :- ";
	cin >> string;
	int s = strlen(string);
	n = strlen(string);
	printPermutations(string, 0, n);
	for (i = 0; i < j; i++)
	{
		cout << arr[i];
	}
	if (j == 2)
	{
		cout << "\nThe result is 0";
	}
	else
	{
		for (i = 0; i < j; i++)
		{
			for (k = i + 1; k < j; k++)
			{
				cout << "\nlength of LCS is " << lowest_common_substring(arr[i], arr[k], s, s);
			}
		}
	}
	get_minimum(arrstore, r);
	return 0;
}