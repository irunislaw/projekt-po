//
// Created by micha on 27.03.2025.
//

#include "Roslina.h"

std::string Roslina::rysowanie() const {

    return "r";

}

void Roslina::akcja() {



}

void Roslina::kolizja() {



}

Roslina::Roslina(Punkt pozycja, uint sila):
    Organizm(pozycja,sila,INICJATYWA_ROSLINY) {

}