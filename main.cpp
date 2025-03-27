#include <iostream>

#include "Punkt.h"
#include "Swiat.h"
#include "Zwierze.h"


int main() {


    Swiat swiat(10,20);

    swiat.addOrganizm(new Zwierze(Punkt{0,0},1u,1u));
    swiat.addOrganizm(new Zwierze(Punkt{2,0},1u,1u));



    swiat.rysujSwiat();

    return 0;
}
