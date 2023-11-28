#include <iostream>
#include "manage.h"
#include "Database.h"

BikeStruct BikeDB[DBSize];

int main() {
    int option;

    //null data at startup
    for(int i = 0; i < DBSize; i++) {
        BikeDB[i].ArtNr = -1;
        BikeDB[i].Prodname = "";
        BikeDB[i].qty = 0;
        BikeDB[i].Date.tm_mday = 0;
        BikeDB[i].Date.tm_mon = 0;
        BikeDB[i].Date.tm_year = 0;
    }

    //temp data
    BikeDB[0].ArtNr = 41;
    BikeDB[1].ArtNr = 236;
    BikeDB[2].ArtNr = 1234;


    while(1){
        //choose option
        std::cout << "\nBitte wählen Sie eine der folgenen Optionen\n"
                     "[1] Alle Einträge anzeigen\n"
                     "[2] Eintrag hinzufügen\n"
                     "[3] Eintrag ändern\n"
                     "[4] Eintrag entfernen\n"
                     "[5] Eintrag suchen\n";
        std::cin >> option;

        //cases calling functions from manage.h/.cpp

        switch (option) {
            case 1: //list
                std::cout << "Hier sind alle Einträge in der Liste\n";
                for (int i = 0; i < DBSize; i++) {
                    if (BikeDB[i].ArtNr > -1) {
                        listData(i, BikeDB[i]);
                    }
                }
                break;

            case 2: //TODO add
                addData(BikeDB);
                break;

            case 3: //TODO change
                //changeData(BikeDB);
                break;

            case 4: //TODO remove

                break;

            case 5: //TODO search

                break;
            default:
                //TODO find out while it loops after invalid input
                //std::cin.clear();
                std::cout << "Bitte geben Sie eine gültige Option ein.";
                break;
        }
    }

    return 0;
}
