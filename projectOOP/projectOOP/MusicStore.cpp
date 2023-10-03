#include "MusicStore.h"
#include <iostream>

using namespace std;

//We do nearly everything here we have defined and create list adding , buying , selling, remove(erasing) , menu 
MusicStore::~MusicStore() {
    for (MusicItem* item : inventory) {
        delete item;
    }
}

void MusicStore::addItem(MusicItem* item) {
    inventory.push_back(item);
}

void MusicStore::listInventory() const {
    cout << "Inventory:" << endl;
    for (MusicItem* item : inventory) {
        item->displayInfo();
    }
    cout << endl;
}
void MusicStore::removeItem(int itemNo) {
    inventory.erase(inventory.begin() + itemNo);
};
MusicItem*  MusicStore::buyItem(int itemNo) {
    MusicItem* boughtItem = inventory.at(itemNo);
    this->removeItem(itemNo);
    return boughtItem;
};

void MusicStore::runMenu() {
    int choice;
    do {
        cout << "\nMenu:\n1. Add CD\n2. Add Vinyl\n3. List Inventory\n4. Remove\n5. Buy\n-1. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string title;
            double price;
            int tracks;
            cout << "Enter CD title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter number of tracks: ";
            cin >> tracks;
            addItem(new CD(title, price, tracks));
            break;
        }
        case 2: {
            string title;
            double price, diameter;
            cout << "Enter Vinyl title: ";
            cin.ignore();
            getline(std::cin, title);
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter diameter: ";
            cin >> diameter;
            addItem(new vinyl(title, price, diameter));
            break;
        }
        case 3:
            listInventory();
            break;
        case 4:
            int itemNo;
            cout << "Which item do you want to delete?...\n";
            cin >> itemNo;
            removeItem(itemNo);
            cout << "New Inventory:\n" << endl;
            listInventory();
             break;
        case 5:
            runBuyMenu();
            break;
        case -1:
            cout << "Exiting...\n";
            break;
        
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice !=-1);
}
void MusicStore::runBuyMenu() {
    int choice = 0;
    do {

        listInventory();
        cout << "Which item do you want to buy?(For Exit Enter:-1)\n";
        cin >> choice;

        if (choice < 0) {
            basket.clear();
            return;
        }

        MusicItem* item = buyItem(choice-1);
        basket.add(item);
        basket.displayInfo();
    }while (choice!=-1);

}