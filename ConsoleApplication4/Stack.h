#pragma once
#include <iostream>

class Stack2
{
private:
	int* data;
	int size;
public:
	Stack2() {
		data = nullptr;
		size = 0;
	}

	~Stack2() {
		delete[] data;
	}

	void push(int value) {

		int* new_data = new int[size + 1];
		if (data != nullptr) 
		{
			for (size_t i = 0; i < size; i++)
			{
				new_data[i] = data[i];
			}
			delete[] data;
		}
		new_data[size] = value;
		data = new_data;
		size += 1;
	}

	int pop() {
		int tmp = data[size - 1];

		const int new_size = size - 1; 

		int* new_data = nullptr;
		if (new_size != 0) 
		{
			new_data = new int[new_size];
			for (size_t i = 0; i < new_size; i++)
			{
				new_data[i] = data[i];
			}
		}

		delete[] data;
		data = new_data;

		size -= 1;
		return tmp;

	}

	int top() const {
		if (data == nullptr) {
			return 0;
		}
		return data[size - 1];
	}

	int Size() const {
		return size;
	}

	void clear() {
		delete[] data;
		size = 0;
	}

	bool isEmpty() {
		return data == nullptr;
	}
};

