#include <iostream>
#include <vector>
#include <format>
#include <functional>
#include <map>
#include <set>
#include <string>


using namespace std;

template<typename T>
class Vector
{
public:
    Vector();
    ~Vector();

public:
    void push_back(const T& In_value);
    void reserve(const int In_capacity);
    void clear();

    int size() { return _size; }
    int capacity() { return _capacity; }

    T& operator[](const int In_pos) { return _data[In_pos]; }
public:

protected:
    T* _data = nullptr;
    int _size = 0;
    int _capacity = 0;
};

#pragma once

template<typename T>
inline Vector<T>::Vector()
{

}

template<typename T>
inline Vector<T>::~Vector()
{
	if (_data)
	{
		delete _data;
		_data = nullptr;
	}
}

template<typename T>
inline void Vector<T>::push_back(const T& In_value)
{
	if (_size == _capacity)
	{
		int newCapacity = static_cast<int>(_capacity * 1.5);

		if (newCapacity == _capacity)
		{
			++newCapacity;
		}

		reserve(newCapacity);

	}

	// 데이터 저장
	_data[_size] = In_value;

	++_size;
}

template<typename T>
inline void Vector<T>::reserve(const int In_capacity)
{
	if (_capacity >= In_capacity)
	{
		return;
	}

	_capacity = In_capacity;

	T* newData = new T[_capacity];

	// 데이터 복사
	for (int i = 0; i < _size; ++i)
	{
		newData[i] = _data[i];
	}

	if (_data)
	{
		delete[] _data;
		_data = nullptr;
	}

	_data = newData;


}

template<typename T>
inline void Vector<T>::clear()
{
	if (_data)
	{
		delete[] _data;
		_data = new T[_capacity];
	}

	_size = 0;

}





int main()
{
    vector<int> v;

    v.resize(10);
    cout << v.size() << " " << v.capacity() << endl;

    v.reserve(100);

    for (int i = 0; i < 100; ++i)
    {
        v.push_back(i);
        cout << v.size()<< " "<< v.capacity() << endl;
    }

    v.clear();
    cout << v.size() << " " << v.capacity() << endl;
    return 0;
}


