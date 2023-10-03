#include "MusicItem.h"
#include <vector>
#include<iostream>
//Basket class header
class Basket
{
private:
	std::vector<MusicItem*> basketProducts;
public:
	void add(MusicItem*);
	void displayInfo();
	void clear();
};

