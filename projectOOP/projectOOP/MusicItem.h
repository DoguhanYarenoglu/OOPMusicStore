#ifndef MUSICITEM_H
#define MUSICITEM_H

#include <string>
//Music item class header
class MusicItem {
protected:
    std::string title;
    double price;

public:
    MusicItem(const std::string& _title, double _price);
    virtual void displayInfo() const = 0; // Pure virtual function

    double getPrice();
    std::string getTitle();
};

#endif // MUSICITEM_H
