#include <iostream>
#include "Thettir.h"

Thettir::Thettir() {
   
    this->rymd = 0;
    

}

Thettir::Thettir(int numer,int staerd, float rymd) : Ihlutir(numer, staerd) {
    this->rymd = rymd;
    
}


float Thettir::getRymd() {
    return this->rymd;
}


void Thettir::setRymd(float rymd) {
    this->rymd = rymd;
}

std::string Thettir::getTegund() {
    return "Thettiir";
}

void Thettir::prenta() {
    std::cout << "numer: " << this->getNumer() << " staerd: " << this->getStaerd() << " rymd: " << this->rymd << std::endl;
}