#pragma once

#include <iostream>
#include <string>
#include "Ihlutir.h"

class Led : public Ihlutir {
    private:
        std::string litur;
    public:
        Led();
        Led(int numer, int staerd, std::string litur);
        std::string getLitur();
        void setLitur(std::string litur);
        std::string getTegund();
        void prenta();
        ~Led();

};