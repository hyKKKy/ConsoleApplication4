#pragma once
#include <iostream>

class List
{
private:
	struct Node
	{
		int value;
		Node* next;
	};
	Node* head;
public:
	List() {
		head = nullptr;
	}

	List(List&& other) noexcept{

	}

	void PushFirst(int value) {
		if (head == nullptr) {
			head = new Node{value, nullptr};
		}
		else {
			Node* new_node = new Node{ value, head };
			head = new_node;
		}
	}

	void PushBack(int value) {
		if (head == nullptr) {
			head = new Node{ value, nullptr };
		}
		else {
			head->next = new Node{ value, nullptr };
		}
	}

	void PopFirst(int value) {

	}
	
	void PopBack(int value) {

	}

	void Show() const {
		Node* current = head;
		if (current == nullptr) {
			std::cout << "List is empty\n";
		}
		else {
			while (current != nullptr) {
				std::cout << current->value << ' ';
				current = current->next;
			}

			std::cout << std::endl;
		}

	}

	void Clear() {
		if (head == nullptr) 
		{
			return;
		}
		Node** current = &head;
		while ((*current)->next != nullptr)
		{
			current = &(*current)->next;
		}
		delete *current;
		*current = nullptr;
		Clear();
	}
};
