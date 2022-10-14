#include "Ihlutalisti.h"

IhlutaListi::IhlutaListi(){
    this->head = nullptr;
}
void IhlutaListi::skraIhlut(Ihlutir* d){
    IhlutaNode* newIhlutirin = new IhlutaNode(d);
    if(!this->head){
        this->head = newIhlutirin;
    }else{
        newIhlutirin->next = this->head;
        this->head = newIhlutirin;
    }
}
void IhlutaListi::skraLed(int numer, int staerd,  std::string litur){
    this->skraIhlut(new Led(numer,staerd,litur));
}
void IhlutaListi::skraVidnam(int numer, int staerd, int ohma){
    this->skraIhlut( new Vidnam(numer,staerd,ohma));
    
}
void IhlutaListi::skraThettir(int numer, int staerd, float rymd){
    this->skraIhlut( new Thettir(numer,staerd, rymd));
}

bool IhlutaListi::afskraihluta(int numer){
    if(this->head){
        if (this->head->ihluturin->getNumer() == numer){
            IhlutaNode* newHead = this->head->next;
            delete this->head;
            this->head = newHead;
            return true;
        }else{
            IhlutaNode* current = this->head;
            IhlutaNode* prev = this->head;
            while(current && current->ihluturin->getNumer() != numer){
                prev = current;
                current = current->next;
            }
            if (current){
                prev->next = current->next;
                delete current;
            }
        }
    }
    return false;
}
void IhlutaListi::prentAllt(){
    IhlutaNode* current = this->head;
    while(current){
        current->ihluturin->prenta();
        current = current->next;
    }
}
bool IhlutaListi::prentaIhlutirNr(int numer){
    IhlutaNode* current = this->head;
    while(current){
        if (current->ihluturin->getNumer() == numer){
            current->ihluturin->prenta();
            return true;
        }
        current = current->next;
    }
    return false;
}

bool IhlutaListi::breytastaerd(int numer, int staerd){
    IhlutaNode* current = this->head;
    while(current){
        if (current->ihluturin->getNumer() == numer){
            this->head->ihluturin->setStaerd(staerd);
            return true;
            
        }
        current = current->next;
    }
    return false;
}

void IhlutaListi::lesaurSkra() {

}


void IhlutaListi::skrifaiSkra() {
    
}


IhlutaListi::~IhlutaListi(){
    while(this->head){
        IhlutaNode* newHead = this->head->next;
        delete this->head;
        this->head =newHead;
    }
}