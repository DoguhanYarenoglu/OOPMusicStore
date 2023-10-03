#include "MusicItem.h"

MusicItem::MusicItem(const std::string& _title, double _price) : title(_title), price(_price) {}

//We used here get 'cause Price protected 

double MusicItem::getPrice() {
	return price;
}
std::string MusicItem::getTitle() {
	return title;
}