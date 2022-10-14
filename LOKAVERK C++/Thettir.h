#pragma once

#include <iostream>
#include <string>
#include "Ihlutir.h"

class Thettir : public Ihlutir {
    private:
        float rymd;
    public:
        Thettir();
        Thettir(int numer,int staerd, float rymd );
        float getRymd();
        void setRymd(float rymd);
        std::string getTegund();
        void prenta();

};