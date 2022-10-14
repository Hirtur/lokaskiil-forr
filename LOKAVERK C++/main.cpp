#include <iostream>
#include <string>
#include <sstream>
#include "rlutil.h"

#include "Ihlutalisti.h"
using namespace std;
using namespace rlutil;

int main() {
    IhlutaListi dl;
    dl.skraLed(100,5,"Rauður");
    dl.skraLed(101,5,"gult");
    dl.skraLed(102,5,"rautt");
    dl.skraLed(103,3,"rautt");
    dl.skraVidnam(104,3,220);
    dl.skraVidnam(105,1,1000);
    dl.skraVidnam(106,3,5000);
    dl.skraThettir(107,2,0.000001);
    dl.skraThettir(108,2,0.0025);
    dl.skraThettir(109,6,0.1);
    

    string inntak, skipun, tegund, litur;
    int numer, staerd , ohma;
    float rymd;
    
    saveDefaultColor();

    do {
        setColor(BLUE);
        cout << "Sláðu inn skipun: ";
        getline(cin, inntak);
        stringstream ss;
        ss << inntak;
        ss >> skipun;
        if(skipun == "skrá") {
            ss >> tegund;
            if(tegund == "Led") {
                ss >> numer >> staerd >> litur;
                dl.skraLed(numer, staerd,litur);
            } else if(tegund == "Vidnam") {
                ss >> numer >> staerd >> ohma;
                dl.skraThettir(numer, staerd, ohma);
            } else if(tegund == "Thetting") {
                ss >> numer >> staerd >> rymd;
                dl.skraThettir(numer, staerd, rymd);
            } else {
                cout << "Þekki ekki ihlutin " << tegund << "!!!" << endl;
            }
        } else if(skipun == "breytastærð") {
            ss >> numer >> staerd;
            if(dl.breytastaerd(numer, staerd) == true) {
                cout << "breyti. " << numer << staerd << "!!!!" <<endl;
            }
            else{
                cout <<"fannst ekki. " << numer << staerd <<endl;
            }
            
        } else if(skipun == "afskra") {
            ss >> numer;
            if(dl.afskraihluta(numer) == false ) {
                cout << "Fann ekki ihlutt nr. " << numer <<"!!!!!!" << endl;
            }
        } else if(skipun == "prenta") {
            dl.prentAllt();
        } else if(skipun == "skoða") {
            ss >> numer;
            if(dl.prentaIhlutirNr(numer) == false) {
                cout << "Fann ekki ihluta nr. " << numer << "!!!" << endl;
            }
        } else if(skipun != "hætta") {
            cout << "Skil ekki skipunina " << skipun << "!!!" << endl;
        }
    } while(skipun != "hætta");

    return 0;  




};


