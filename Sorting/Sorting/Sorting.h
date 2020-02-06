#include <array>
#pragma once
using std::array;


template<typename T>
void bubS(T& arr, int arrLen)
{
	//int temp = sizeof(arr) / sizeof(int);

	for (size_t i = 0; i <= (arrLen); i++)
	{
		for (size_t j = (arrLen - 1); j >= i + 1; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				auto temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}

	}
}
