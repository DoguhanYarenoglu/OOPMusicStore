#include "CD.h"
#include <iostream>
//we defined here our CD class function
CD::CD(const std::string& _title, double _price, int _numberOfTracks)
    : MusicItem(_title, _price), numberOfTracks(_numberOfTracks) {}

void CD::displayInfo() const {
    std::cout << "CD: " << title << ", Price: $" << price << ", Tracks: " << numberOfTracks << std::endl;
}
