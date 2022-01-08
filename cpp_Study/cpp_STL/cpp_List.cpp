#include <iostream>
using namespace std;
#include<list>



template<typename T>
class Node
{
	Node() :next(nullptr), prev(nullptr), value(T())
	{

	}
public:
	Node<T>* next;
	Node<T>* prev;
	T value;
};

template<typename T>
class Iterator
{
public:
	Iterator() :ptr(nullptr)
	{

	}
	Iterator(Node<T>* _ptr) :ptr(_ptr)
	{

	}
	void operator=(const Iterator& right)
	{
		ptr = right.ptr;
	}
	bool operator==(const Iterator& right)
	{
		return (ptr == right.ptr);
	}
	bool operator!=(const Iterator& right)
	{
		return !(ptr == right.ptr);
	}
	T& operator*()
	{
		return ptr->value;
	}
	Iterator& operator++()
	{
		if(nullptr!=this->ptr->next)
			this->ptr = this->ptr->next;

		return *this;
	}
	Iterator operator++(int)
	{
		Iterator temp = *this;
		if (nullptr != this->ptr->next)
			this->ptr = this->ptr->next;

		return temp;
	}
	Iterator& operator--()
	{
		if(nullptr != this->ptr->prev)
			this->ptr = this->ptr->prev;

		return *this;
	}
	Iterator operator--(int)
	{
		Iterator temp = *this;

		if (nullptr != this->ptr->prev)
			this->ptr = this->ptr->prev;

		return temp;
	}
public:
	Node<T>* ptr;
};


template<typename T>
class List
{
public:
	List() : myHead(new Node<T>()), myTail(new Node<T>()),size(0)
	{
		myHead->next = myTail;
		myHead->prev = nullptr;
		myTail->next = nullptr;
		myTail->prev = myHead;

	}
	~List()
	{
		if (myHead != nullptr)
			delete myHead;
		if (myTail != nullptr)
			delete myTail;

	}
	void push_back(T _value)
	{
		Node<T>* temp = myTail->prev;

		myTail->prev = new Node<T>();

		myTail->prev->value = _value;
		myTail->prev->next = myTail;
		myTail->prev->prev = temp;
		temp->next = myTail->prev;
		size++;
	}
	T pop_back()
	{

		Node<T>* temp = myTail->prev->prev;
		T tempValue = myTail->prev->value;

		delete myTail->prev;
		myTail->prev = nullptr;

		temp->next = myTail;
		myTail->prev = temp;
		size--;
		
		return tempValue;
	}

public:
	typedef Iterator<T> iterator;

	iterator insert(const iterator& _point,T _value)
	{
		if (_point.ptr == myHead)
		{
			cout << "insert ¿À·ù" << endl;
			return nullptr;
		}

		Node<T>* temp = _point.ptr->prev;
		iterator it = iterator(new Node<T>());
		it.ptr->next = _point.ptr;
		it.ptr->prev = temp;
		it.ptr->value = _value;
		temp->next = it.ptr;
		_point.ptr->prev = it.ptr;
		size++;
		return it;

	}

	void erase(iterator _point)
	{
		if (_point.ptr != myHead && _point.ptr != myTail)
		{
			_point.ptr->prev->next = _point.ptr->next;
			_point.ptr->next->prev = _point.ptr->prev;
			delete _point.ptr;
			_point.ptr = nullptr;
		}
	}
	iterator begin()
	{
		return iterator(myHead->next);
	}
	iterator end()
	{
		return iterator(myTail);
	}

public:
	Node<T>* myHead;
	Node<T>* myTail;
	int size;
};


void main()
{

	List<int> li;
	List<int>::iterator eraseIt;

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			eraseIt = li.insert(li.end(), i);
		}
		else
		{
			li.push_back(i);
		}
	}

	li.pop_back();
	li.pop_back();
	li.erase(eraseIt);
	li.erase(li.begin());
	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
	{
		cout << (*it) << endl;
	}
}