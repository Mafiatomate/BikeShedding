#include <iostream>
#include <string>
#include <ctime>

struct{

    int ArtNr;
    std::string Prodname;
    int qty;

    struct tm{
        int tm_mday;//0 to 24
        int tm_mon; //0 to 11
        int tm_year;
    }Date;

} BikeStruct;



int main() {


    return 0;
}
