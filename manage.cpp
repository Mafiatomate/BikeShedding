//
// Created by heint on 27.11.2023.
//

#include "manage.h"
#include "Database.h"
#include <iostream>
#include <string>


void listData(int i, BikeStruct DB){

    std::cout << "\nIndex: " << i << "\n";
    std::cout << "Artikelnummer: " << DB.ArtNr << "\n";
    std::cout << "Produktname: " << DB.Prodname << "\n";
    std::cout << "Menge: " << DB.ArtNr << "\n";
    std::cout << "Datum: " << DB.ArtNr << "\n";

};


void addData(BikeStruct DB[]){

    for(int i = 0; i<= DBSize; i++){
        if (DB[i].ArtNr == -1){
        //TODO validate user input
            std::cout << "Artikelnummer eingeben: \n";
            std::cin >> DB[i].ArtNr;
            std::cout << "Produktname eingeben:\n";
            std::cin >> DB[i].Prodname;
            std::cout << "Menge eingeben:\n";
            std::cin >> DB[i].qty;
            std::cout << "Jahr:\n";
            std::cin >> DB[i].Date.tm_year;
            std::cout << "Monat:\n";
            std::cin >> DB[i].Date.tm_mon;
            std::cout << "Tag:\n";
            std::cin >> DB[i].Date.tm_mday;
            std::cout << "Eintrag hinzugefügt\n";
        }
    }
};