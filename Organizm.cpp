//
// Created by micha on 27.03.2025.
//

#include "Organizm.h"


Punkt Organizm::getPolozenie() const {
    return polozenie;
}

Organizm::Organizm(Punkt polozenie, uint sila, uint inicjatywa):
    polozenie(polozenie),
    sila(sila),
    inicjatywa(inicjatywa){

}

void Organizm::setSwiat(Swiat* swiat) {

    this->swiat = swiat;

}

Swiat *Organizm::getSwiat() {
    return swiat;
}