#include <iostream>
#include <string>
#include <ctime>
#include "manage.h"
#include "Database.h"


int main() {
    int option;
    int DBUsed[DBSize]; //0 -> free, 1 -> used
    BikeStruct BikeDB[DBSize];


    for(int i = 0; i <= DBSize; i++){
        DBUsed[i] = 0;
    }

    std::cout << "\nBitte wählen Sie eine der folgenen Optionen\n";
    std::cout << "[1] Liste von Artikeln anzeigen\n"
                 "[2] Einen Artikel der Liste hinzufügen\n"
                 "[3]\n";

    std::cin >> option;


    //temp data
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
                    listData();
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
