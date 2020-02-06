#include <iostream>
#include <array>
#include "Sorting.h"

using std::cout;
using std::cin;


int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 99;
	}
	cout << "Unsorted: ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ", " ;
	}
	int arrInt = (sizeof(arr) / sizeof(*arr));
	cout << "\nLength of array = " << arrInt << "\n";
	bubS(arr, arrInt);
	cout << "Sorted:   ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ", ";
	}
	return 0;
}