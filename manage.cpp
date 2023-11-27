//
// Created by heint on 27.11.2023.
//

#include "manage.h"
#include "Database.h"
#include <iostream>
#include <string>


void listData(int i){

    std::cout << "Artikelnummer :" << BikeDB[i].ArtNr << "\n";
    std::cout << "Produktname :" << BikeDB[i].Prodname << "\n";
    std::cout << "Menge :" << BikeDB[i].ArtNr << "\n";
    std::cout << "Datum: " << BikeDB[i].ArtNr << "\n";




    return "HIER ALLE DATEN";
};