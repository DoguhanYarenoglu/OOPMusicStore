#include "vinyl.h"
#include <iostream>
//This is the vinyl nearly same with CD but vinyl ones..
vinyl::vinyl(const std::string& _title, double _price, double _diameter)
    : MusicItem(_title, _price), diameter(_diameter) {}

void vinyl::displayInfo() const {
    std::cout << "Vinyl: " << title << ", Price: $" << price << ", Diameter: " << diameter << " inches" << std::endl;
}
