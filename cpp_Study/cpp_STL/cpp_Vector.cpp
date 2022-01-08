//#include<iostream>
//using namespace std;
////강의 클론 코딩.
//template <typename T>
//class Iterator
//{
//public:
//	Iterator() :ptr(nullptr)
//	{
//
//	}
//	Iterator(T* ptr) :ptr(ptr)
//	{
//
//	}
//	Iterator& operator++()
//	{
//		ptr++;
//		return *this;
//	}
//	Iterator operator++(int)
//	{
//		Iterator temp = *this;
//		ptr++;
//		return temp;
//	}
//	Iterator& operator--()
//	{
//		ptr--;
//		return *this;
//	}
//	Iterator operator--(int)
//	{
//		Iterator temp = *this;
//		ptr--;
//		return temp;
//	}
//	Iterator operator+(const int count)
//	{
//		Iterator temp = *this;
//		temp.ptr += count;
//		return temp;
//	}
//	Iterator operator-(const int count)
//	{
//		Iterator temp = *this;
//		temp.ptr -= count;
//		return temp;
//	}
//	void operator=(T* point)
//	{
//		ptr = point;
//	}
//	bool operator==(const Iterator& right)
//	{
//		return ptr == right.ptr;
//	}
//	bool operator!=(const Iterator& right)
//	{
//		return !(*this == right);
//	}
//	T& operator*()
//	{
//		return *ptr;
//	}
//	
//public:
//	T* ptr = nullptr;
//};
//template <typename T>
//class Vector
//{
//public:
//	Vector():_data(nullptr),_size(0), _capacity(1)
//	{
//		_data = new T[_capacity];
//	}
//	~Vector()
//	{
//		if (_data)
//			delete _data;
//	}
//	void push_back(T data)
//	{
//		if (_capacity == _size)
//		{
//			 int newcapacity= _capacity * 2;
//			 if (_capacity == newcapacity)
//				 newcapacity++;
//
//			 reserve(newcapacity);
//
//		}
//		T* a = _data + _size;
//		*a = data;
//		_size++;
//	}
//	void reserve(int capacity)
//	{
//		_capacity = capacity;
//		T* newdata = new T[_capacity];
//
//		for (int i = 0; i < _size; i++)
//			newdata[i] = _data[i];
//
//		if (_data != nullptr)
//			delete _data;
//		
//		_data = newdata;
//		
//	}
//	int size()
//	{
//		return _size;
//	}
//	int capacity()
//	{
//		return _capacity;
//	}
//
//	T& operator[](const int pos)
//	{
//		return _data[pos];
//	}
//	void clear() { _size = 0; }
//public:
//	typedef Iterator<T> itrator;
//	itrator begin()
//	{
//		return itrator(&_data[0]);
//	}
//	itrator end()
//	{
//		return begin()+_size;
//	}
//public:
//	int _size;
//	int _capacity;
//	T* _data;
//};
//
//void main()
//{
//	Vector<int> a;
//	for (int i = 0; i < 100; i++)
//	{
//		a.push_back(i);
//		cout << a.size() << " " << a.capacity() << endl;
//	}
//	for (int i = 0; i < a.size(); i++)
//	{
//		cout << a[i] << endl;
//	}
//	Vector<int>::itrator it= a.begin();
//	Vector<int>::itrator itend = a.end();
//
//	for (; it != itend; ++it)
//	{
//		cout << *it << endl;
//	}
//
//
//}