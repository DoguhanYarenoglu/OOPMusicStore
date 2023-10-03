#include "Basket.h"
using namespace std;
//we defined here our basket class function whut holds a basket 
void Basket::add(MusicItem* item) {
	basketProducts.push_back(item);
}

void Basket::displayInfo() {
	int totalPrice = 0;
	for (MusicItem* product : basketProducts) {
		product->displayInfo();
		totalPrice += product->getPrice();
	};
	cout << "Total Price:" << totalPrice << "$" << endl << endl;
}


void Basket::clear() {
	basketProducts.clear();
}