#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int>&A) 
{
	int n = A.size();

	for (int i = 0; i < n; i++) 
	{
		int max = i;

		for (int j = i; j < n; j++)
		{
			if (A[j] > A[max]) 
			{
				max = j;
			}
		}
		swap(A[i], A[max]);
	}
}

int main()
{
	vector<int>A;
	int x;

	while (cin >> x)
	{
		A.push_back(x);
	}

	SelectionSort(A);
	
	for (int i = 0; i < A.size(); i++)
	{
		cout << A[i] << " ";
	}
}
