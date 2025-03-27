//
// Created by micha on 27.03.2025.
//

#pragma once

#include "Organizm.h"

class Zwierze : public Organizm {

public:

    Zwierze(Punkt polozenie, uint sila, uint inicjatywa);

    void akcja() override;
    void kolizja() override;

    [[nodiscard]] std::string rysowanie() const override;




};