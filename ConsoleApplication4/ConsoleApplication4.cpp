#include <iostream>
#include "Stack.h"
#include "list.h"

int main()
{
	//std::cout << "Hello World!\n";
	/*int* arr = new int[5] {};

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << arr[i] << ' ';
	}*/

	/*Stack2 stack2;

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << i << ' ';
		stack2.push(i);
	}

	std::cout << std::endl;

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << stack2.pop() << ' ';
	}

	std::cout << std::endl;*/

	List list1;

	list1.PushBack(1);
	list1.PushBack(2);

	list1.Show();
}

