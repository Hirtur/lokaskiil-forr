#pragma once

#include <iostream>
#include <string>


class Ihlutir {
    private:
    
        int numer;
        int staerd;

    public:
        Ihlutir();
        Ihlutir(int numer, int staerd);
        int getNumer();
        void setNumer(int numer);
        int getStaerd();
        void setStaerd(int staerd);
        virtual std::string getTegund();
        virtual void prenta();
        

};