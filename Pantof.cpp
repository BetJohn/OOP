//
// Created by IoanB on 03.03.2022.
//

#include "Pantof.h"

Pantof::Pantof(float pret, std::string material, int marime) :pret(pret), material(std::move(material)), marime(marime){}


[[maybe_unused]] std::string Pantof::getMaterial() {
    return material;
}

Pantof::Pantof(const Pantof &other) : pret{other.pret}, material{other.material},marime{other.marime} {
}

Pantof &Pantof::operator=(const Pantof &other) {
    pret = other.pret;
    material = other.material;
    marime  = other.marime;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Pantof &pt) {
    os << "Pret: " << pt.pret << ", material: " << pt.material <<", marime: "<<pt.marime<<"\n";
    return os;
}
