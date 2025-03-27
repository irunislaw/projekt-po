//
// Created by micha on 27.03.2025.
//
#pragma once

#include "Organizm.h"

#define INICJATYWA_ROSLINY 0


class Roslina : public Organizm {


public:

    Roslina(Punkt pozycja, uint sila);

    [[nodiscard]] std::string rysowanie() const override;
    void akcja() override;

    void kolizja() override;


};