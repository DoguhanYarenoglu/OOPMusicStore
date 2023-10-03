#ifndef MUSICSTORE_H
#define MUSICSTORE_H

#include <vector>
#include "MusicItem.h"
#include "CD.h"
#include "vinyl.h"
#include "Basket.h"
//MusicStore class header
class MusicStore {
private:
    std::vector<MusicItem*> inventory;
    Basket basket;

public:
    ~MusicStore();
    void addItem(MusicItem* item);
    void removeItem(int itemNo);
    MusicItem* buyItem(int itemNo);
    void listInventory() const;
    void runMenu();
    void runBuyMenu();

};

#endif // MUSICSTORE_H

