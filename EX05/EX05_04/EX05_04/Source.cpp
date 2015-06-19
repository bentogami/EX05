#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

template < typename T > 
void shuffle(vector<T> &v);

int main()
{
	//initialize rand and an empty int vector
	srand(time(NULL));
	vector<int> test;

	//populate int vector
	cout << "Enter 10 numbers:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Number " << i + 1 << ": ";
		int num;
		cin >> num;
		test.push_back(num);
	}

	//run shuffle function
	shuffle(test);

	//return shuffled vector
	cout << "Your numbers shuffled are:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << test.at(i) << " ";
	}
	cout << endl;

	return 0;
}

template<typename T>
void shuffle(vector<T> &v) 
{
	for (int i = v.size() - 1; i > 0; i--) 
	{
		//takes some number between 0 and i
		int j = rand() % i + 1;

		//swaps the values at index i and j
		swap(v[i], v[j]);
	}
}