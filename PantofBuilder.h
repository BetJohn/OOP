//
// Created by IoanB on 03.06.2022.
//

#ifndef MAIN_CPP_PANTOFBUILDER_H
#define MAIN_CPP_PANTOFBUILDER_H


#include <utility>

#include "Pantof.h"

class [[maybe_unused]] PantofBuilder {
private:
    Pantof pantof;
public:
    PantofBuilder() = default;
    PantofBuilder &material(std::string material);

    [[maybe_unused]] PantofBuilder &marime(int marime);
    PantofBuilder &pret(float pret);

    [[maybe_unused]] Pantof build();
};


#endif //MAIN_CPP_PANTOFBUILDER_H
