#include <iostream>
#include <string>
using namespace std;

#ifndef VECTOR_H
#define VECTOR_H
template < typename T >

class Vector
{
private:
	int currPos = 0;
	int Size;
	T* contents;
	//vector size altering functions (for pop and push)
	T* increaseSize(T v[], int size);
	T* reduceSize(T v[], int size);

public:
	//Constructors
	Vector<T>() {
		Size = 1;
		contents = new T[1];
	}

	Vector<T>(int s) {
		Size = s;
		contents = new T[s];
	}

	Vector <T>(int s, T element) {
		Size = s;
		contents = new T[s];
		for (int i = 0; i < Size; i++)
			contents[i] = element;
	}

	//Methods
	void push_back(T element);

	void pop_back();

	unsigned int size() const;

	T at(int index) const;

	bool empty() const;

	void clear();

	void swap(Vector &v2);
};

#endif