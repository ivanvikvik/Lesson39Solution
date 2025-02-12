#include "sort.h"

// O(N^2), O(N) - best
void bubble_sort(int* array, int length) {	
	for (int j = 0; j < length - 1; j++)
	{
		bool flag = true;

		for (int i = 0; i < length - 1 - j; i++)
		{
			if (array[i] > array[i + 1]) {
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
				flag = false;
			}			
		}

		if (flag) {
			break;
		}
	}
}

// O(N^2)
void selected_sort(int* array, int length) {
	for (int j = 0; j < length; j++)
	{
		int index = j;
		for (int i = j + 1; i < length; i++)
		{
			if (array[i] < array[index]) {
				index = i;
			}
		}

		int t = array[j];
		array[j] = array[index];
		array[index] = t;
	}
}