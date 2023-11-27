#include <iostream>
#include <string>
#include <ctime>

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
    int i = 0;

    std::cout << "\nBitte wählen Sie eine der folgenen Optionen\n";
    std::cout << "[1] Liste von Artikeln anzeigen\n"
                 "[2] Einen Artikel der Liste hinzufügen\n"
                 "[3]\n";

    std::cin >> option;

    switch (option){
        case 1:
        //Liste anzeigen
            break;
        case 2:
        //Artikel hinzufügen
        std::cin >> BikeDB[i].ArtNr;
        std::cin >> BikeDB[i].Prodname;
        std::cin >> BikeDB[i].qty;
        std::cin >> BikeDB[i].Date.tm_mday;
        std::cin >> BikeDB[i].Date.tm_mon;
        std::cin >> BikeDB[i].Date.tm_year;

            break;
        case 3:

            break;
        default:
            std::cout << "Bitte geben Sie eine gültige Option ein.";
    }
    return 0;
}
