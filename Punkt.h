//
// Created by micha on 27.03.2025.
//
#pragma once

typedef unsigned int uint;

struct Punkt {

    uint y, x;

    Punkt(uint y, uint x): y(y),x(x) {};

    bool operator==(Punkt o) const {

        return x == o.x && y == o.y;

    }

};