#include <iostream>
#include "util.h"
#include "sort.h"
#include <ctime>
using namespace std;

#define SIZE 10

// Это самый мощный комментарий... :))
int main() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//init(array, SIZE, -10, 10);

	cout << "Before array: " << convert(array, SIZE) << endl;

	//int count = bubble_sort(array, SIZE);

	//int count = selected_sort(array, SIZE);

	selected_sort(array, SIZE);

	cout << "After array: " << convert(array, SIZE) << endl;

	//cout << "Count: " << count << eselected_sort(array, SIZE);ndl;

	return 0;
}