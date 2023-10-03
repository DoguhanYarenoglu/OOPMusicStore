#ifndef  VINYL_H
#define  VINYL_H

#include "MusicItem.h"
//Vinyl class header
class vinyl : public MusicItem
{
private:
	double diameter;

public:
	vinyl(const std::string& _title, double _price, double _diameter);
	void displayInfo() const override;
};
#endif // ! VINYL_H

