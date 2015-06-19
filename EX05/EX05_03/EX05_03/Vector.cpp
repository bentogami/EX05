#include <iostream>
#include <string>
#include "vector.h"
using namespace std;

template < typename T > 
void Vector<T>::push_back(T element) 
{
	if (Size == currPos) {
		contents = increaseSize(contents, Size);
		Size++;
		currPos++;
		contents[currPos - 1] = element;
	}
	else {
		contents[currPos] = element;
		currPos++;
	}
}

template < typename T >
void Vector<T>::pop_back() 
{
	if (Size > 0) {
		contents = reduceSize(contents, Size);
		Size--;
		currPos--;
	}
	else
		cout << "Cannot reduce below 0";
}

template < typename T >
unsigned int Vector<T>::size() const 
{
	return Size;
}

template < typename T >
T Vector<T>::at(int index) const
{
	return contents[index];
}

template < typename T >
bool Vector<T>::empty() const
{
	return (!(Size > 1));
}

template < typename T >
void Vector<T>::clear()
{
	contents = new T[1];
	Size = 1;
	currPos = 0;
}

template < typename T >
void Vector<T>::swap(Vector &v2)
{	
	int greater;
	if (Size >= v2.size())
		greater = Size;
	else
		greater = v2.size();

	Vector<T> vtemp(greater);
	Vector<T> vtemp2(greater);
	for (int i = 0; i < Size; i++)
		vtemp.at(i) = contents[i];
	for (int i = 0; i < v2.size(); i++)
		vtemp2.at(i) = v2.at(i);

	for (int i = 0; i < Size; i++)
		v2.at(i) = vtemp.at(i);
	for (int i = 0; i < v2.size; i++)
		contents[i] = vtemp2.at(i);

	delete[] vtemp;
	delete[] vtemp2;
}

template < typename T > 
T* Vector<T>::increaseSize(T v[], int size)
{
	T* nVector = new T [size + 1];
	for (int i = 0; i < size; i++)
		nVector[i] = v[i];
	delete[] v;
	return nVector;
}

template < typename T >
T* Vector<T>::reduceSize(T v[], int size)
{
	T* nVector = new T [size - 1];
	for (int i = 0; i < size - 1; i++)
		nVector[i] = v[i];
	delete[] v;
	return nVector;
}