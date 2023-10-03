/*
              ********Doðuhan Yarenoðlu*****
                ********1600002789********
              
             
*/
#include "MusicStore.h"
// this is out main.cpp 
int main() {
    MusicStore store;

    //I add some products here to our vector if i didn't it would be empty anddd that's it.
    CD m1("Guns N' Roses - Appetite For Destruction ", 123.0, 12);
    vinyl m2("Guns N' Roses - Appetite For Destruction", 333.0, 24);
    CD m3("MetallicA-Kill'em All", 123.0, 12);
    vinyl m4("MetallicA-Kill'em All", 400.0, 26);
    CD m5("Guns N' Roses - Use Your Illusion",240.0,16);
    vinyl m6("Guns N' Roses - Use Your Illusion", 970.0, 18);
    CD m7("Guns N' Roses - Use Your IllusionII", 450.0, 16);
    vinyl m8("Guns N' Roses - Use Your IllusionII", 1000.0, 18);
    store.addItem(&m1);
    store.addItem(&m2);
    store.addItem(&m3);
    store.addItem(&m4);
    store.addItem(&m5);
    store.addItem(&m6);
    store.addItem(&m7);
    store.addItem(&m8);

    store.runMenu();
    return 0;
}
