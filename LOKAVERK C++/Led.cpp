#include "Led.h"

Led::Led() {
    this->litur = "";

}

Led::Led(int numer, int staerd, std::string litur) : Ihlutir(numer, staerd) {
    this->litur = litur;
}



std::string Led::getLitur() {
    return this->litur;
}


void Led::setLitur(std::string litur) {
    this->litur = litur;
}

std::string Led::getTegund() {
    return "led";
}

void Led::prenta() {
    std::cout <<"numer: " << this->getNumer() << " staerd: " << this->getStaerd() << " litur: " << this->litur << std::endl;
}


Led::~Led() {

}