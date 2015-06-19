#include <iostream>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size);

int main()
{
	int list1[] = { 1, 2, 3, 4, 5 };
	double list2[] = { 1.0, 2.0, 3.0, 5.0, 4.0 };
	string list3[] = { "a", "b", "c", "d", "e" };

	cout << boolalpha << isSorted(list1, 5) << endl;
	cout << boolalpha << isSorted(list2, 5) << endl;
	cout << boolalpha << isSorted(list3, 5) << endl;
}

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i + 1])
			return false;
	}
	return true;
}