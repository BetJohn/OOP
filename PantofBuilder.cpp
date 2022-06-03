//
// Created by IoanB on 03.06.2022.
//

#include "PantofBuilder.h"

Pantof PantofBuilder::build() {
    return pantof;
}

PantofBuilder &PantofBuilder::pret(float pret) {
    pantof.pret = pret;
    return *this;
}

PantofBuilder &PantofBuilder::marime(int marime) {
    pantof.marime = marime;
    return *this;
}

PantofBuilder &PantofBuilder::material(std::string material) {
    pantof.material = std::move(material);
    return *this;
}
