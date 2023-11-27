//
// Created by heint on 27.11.2023.
//

#include "Database.h"

#include <iostream>
#include <string>

struct BikeStruct{

    int ArtNr;
    std::string Prodname;
    int qty;

    struct tm{
        int tm_mday;//0 to 24
        int tm_mon; //0 to 11
        int tm_year;
    };
    tm Date;
};

