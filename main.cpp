#include <iostream>
#include <string>
#include <ctime>
#include "manage.h"

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



int main() {
    int DBSize = 10;
    int DBUsed[DBSize]; //0 -> free, 1 -> used
    int option;
    BikeStruct BikeDB[DBSize];
    int current = 0;

    for(int i = 0; i <= DBSize; i++){
        DBUsed[i] = 0;
    }

    std::cout << "\nBitte wählen Sie eine der folgenen Optionen\n";
    std::cout << "[1] Liste von Artikeln anzeigen\n"
                 "[2] Einen Artikel der Liste hinzufügen\n"
                 "[3]\n";

    std::cin >> option;


    //temp
    BikeDB[0].ArtNr = 41;
    BikeDB[1].ArtNr = 236;
    BikeDB[2].ArtNr = 1234;
    DBUsed[1] = 1;
    DBUsed[2] = 1;
    DBUsed[3] = 1;

    switch (option){
        case 1: //Liste anzeigen
            std::cout << "Hier sind alle Einträge in der Liste\n";


            for (int i = 0; i<= DBSize; i++){
                if (DBUsed[i] == 1) {
                    std::cout << "[" << i << "] " << "Artikelnummer: " << BikeDB[i].ArtNr << "\n";
                }
            }

            break;
        case 2:
        //Artikel hinzufügen
            for(int i = 0; i<= DBSize; i++){
                if (DBUsed[i] == 0){
                    std::cout << "Artikelnummer eingeben: \n";
                    std::cin >> BikeDB[current].ArtNr;
                    std::cout << "Produktname eingeben:\n";
                    std::cin >> BikeDB[current].Prodname;
                    std::cout << "Menge eingeben:\n";
                    std::cin >> BikeDB[current].qty;
                    std::cout << "Jahr:\n";
                    std::cin >> BikeDB[current].Date.tm_year;
                    std::cout << "Monat:\n";
                    std::cin >> BikeDB[current].Date.tm_mon;
                    std::cout << "Tag:\n";
                    std::cin >> BikeDB[current].Date.tm_mday;

                    //TODO listData() fertigstellen und einfügen
                    std::cout << "Eintrag hinzugefügt\n";
                }
                break;
            }


            break;
        case 3:

            break;
        default:
            std::cout << "Bitte geben Sie eine gültige Option ein.";
    }
    return 0;
}
