#include<iostream>
using namespace std;

class Item
{
public:
	int _itemId = 0;
	int _rarity = 0;
	int _ownerId = 0;
};
class FindByOwnerId
{
public:
	bool operator()(const Item* item)
	{
		return(item->_ownerId == _ownerId);
	}
public:
	int _ownerId;
};
class FindByRarity
{
public:
	bool operator()(const Item* item)
	{
		return(item->_rarity == _rarity);
	}
public:
	int _rarity;
};

template<typename T>
Item* FindItem(Item items[], int itemCount,T selector)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];

		if(selector(item))
		return item;
	}
	return nullptr;
}
int main()
{
	Item items[10];
	FindByOwnerId fun1;
	FindByRarity fun2;

	fun1._ownerId = 100;
	fun2._rarity = 1;

	FindItem(items, 10, fun1);
	FindItem(items, 10, fun2);

	return 0;
}