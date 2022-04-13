//
// Created by IoanB on 03.03.2022.
//

#include "Pantof.h"

Pantof::Pantof(float pret, std::string material, int marime) :pret(pret), material(std::move(material)), marime(marime){}

[[maybe_unused]] float Pantof::getPret() const {
    return this->pret;
}

[[maybe_unused]] std::string Pantof::getMaterial() {
    return material;
}

Pantof::Pantof(const Pantof &other) : pret{other.pret}, material{other.material},marime{other.marime} {
    std::cout << "Constr de copiere Pantof\n";
}

Pantof &Pantof::operator=(const Pantof &other) {
    pret = other.pret;
    material = other.material;
    marime  = other.marime;
    std::cout << "operator= copiere Pantof\n";
    return *this;
}

[[maybe_unused]] int Pantof::getMarime() const {
    return marime;
}

std::ostream &operator<<(std::ostream &os, const Pantof &pt) {
    os << "Pret: " << pt.pret << ", material: " << pt.material <<", marime: "<<pt.marime<<"\n";
    return os;
}
