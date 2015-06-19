#include <iostream>
using namespace std;

template<typename T>
int linearSearch(const T list[], T key, int arraySize);

int main()
{
	int list1[] = { 1, 2, 3, 4, 5 };
	double list2[] = { 1.0, 1.5, 2.0, 2.5, 3.0 };
	string list3[] = { "one", "two", "three", "four", "five" };

	cout << linearSearch(list1, 3, 5) << endl;
	cout << linearSearch(list2, 3.0, 5) << endl;
	string test = "one";
	cout << linearSearch(list3, test, 5) << endl;
}

template<typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++) 
	{
		if (key == list[i])
			return i;
	}
	return -1;
}