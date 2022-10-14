#pragma once

#include "Led.h"
#include "Vidnam.h"
#include "Thettir.h"
#include "IhlutaNode.h"

#include <string>

class IhlutaListi {
    private:
        IhlutaNode* head;
    public:
        IhlutaListi();
        void skraIhlut(Ihlutir* d);
        void skraLed(int numer, int staerd, std::string litur);
        void skraVidnam(int numer,int staerd, int ohma);
        void skraThettir(int numer, int staerd, float rymd);
        bool afskraihluta(int numer);
        bool breytastaerd(int numer, int staerd);
        void lesaurSkra();
        void skrifaiSkra();
        void prentAllt();
        bool prentaIhlutirNr(int numer);
        ~IhlutaListi();
};
