#pragma once

#include"Ihlutir.h"

struct IhlutaNode{
    Ihlutir* ihluturin;
    IhlutaNode* next;

    IhlutaNode(Ihlutir* d){
        this->ihluturin = d;
        this->next = nullptr;
    }

    ~IhlutaNode(){
        delete this->ihluturin;
    }
};