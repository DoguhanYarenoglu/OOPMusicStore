#ifndef CD_H
#define CD_H
#include "MusicItem.h"

//CD class header
class CD : public MusicItem {

private:
	int numberOfTracks;

public:
	CD(const std::string& _title, double _price, int _numberOfTracks);
	void displayInfo() const override;


};
#endif // !CD_H

