#include "Ihlutir.h"



Ihlutir::Ihlutir() {
  
    this->numer = 0;
    this->staerd = 0;
}

Ihlutir::Ihlutir( int numer,int stard) {
   
    this->numer = numer;
    this->staerd = staerd;
}



int Ihlutir::getNumer() {
    return this->numer;

}

void Ihlutir::setNumer(int numer) {
    this->numer = numer;
}

int Ihlutir::getStaerd() {
    return this->staerd;
}

void Ihlutir::setStaerd(int staerd) {
    this->staerd = staerd;
}

std::string Ihlutir::getTegund() {
    return "ihlutir";
}

void Ihlutir::prenta() {
    std::cout <<"numer" << this->numer << "staerd" << this->staerd << std::endl;

}




































