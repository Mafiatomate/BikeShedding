//
// Created by heint on 27.11.2023.
//

#ifndef BIKESHEDDING_DATABASE_H
#define BIKESHEDDING_DATABASE_H

#endif //BIKESHEDDING_DATABASE_H

#include <iostream>
#include <string>

const int DBSize = 10;
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
