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
    int current = 0;

    std::cout << "\nBitte wählen Sie eine der folgenen Optionen\n";
    std::cout << "[1] Liste von Artikeln anzeigen\n"
                 "[2] Einen Artikel der Liste hinzufügen\n"
                 "[3]\n";

    std::cin >> option;

    switch (option){
        case 1: //Liste anzeigen
            std::cout << "Hier sind alle Einträge in der Liste\n";


            for (int i = 0; i<= DBSize; i++){
                std::cout <<"[" << current << "] " << "Artikelnummer: " << BikeDB[current].ArtNr;
            }
            break;
        case 2:
        //Artikel hinzufügen
            for(int i = 0; i<= DBSize; i++){
                if (DBUsed[i] == 0){
                    std::cin >> BikeDB[current].ArtNr;
                    std::cin >> BikeDB[current].Prodname;
                    std::cin >> BikeDB[current].qty;
                    std::cin >> BikeDB[current].Date.tm_mday;
                    std::cin >> BikeDB[current].Date.tm_mon;
                    std::cin >> BikeDB[current].Date.tm_year;
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
