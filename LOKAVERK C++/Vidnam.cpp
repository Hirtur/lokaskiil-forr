
#include "Vidnam.h"



Vidnam::Vidnam() {
    this->ohma = 0;

}

Vidnam::Vidnam(int numer,int staerd, int ohma) : Ihlutir(numer,staerd) {
    this->ohma = ohma;
}


int Vidnam::getOhma() {
    return this->ohma;
}


void Vidnam::setOhma(int ohma) {
    this->ohma = ohma;
}

std::string Vidnam::getTegund() {
    return "VIDNAM";
}

void Vidnam::prenta() {
    std::cout <<"numer: " <<this->getNumer() << " staerd: " << this->getStaerd() << " ohma:" << this->ohma << std::endl;
}