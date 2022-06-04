//
// Created by IoanB on 04.06.2022.
//

#ifndef MAIN_CPP_APLICATIE_H
#define MAIN_CPP_APLICATIE_H

#include <iostream>
#include "Sifonier.h"
#include "Outfit.h"

class Aplicatie {
    [[maybe_unused]] std::vector<Outfit>outfituri;
public:
    void afisare_meniu();

    const std::vector<Outfit> &getOutfituri() const;

    [[maybe_unused]] void meniu(Sifonier Sifonierul_nostru);

};


#endif //MAIN_CPP_APLICATIE_H
