//
// Created by IoanB on 03.03.2022.
//

#include "Haina.h"

Haina &Haina::operator=(const Haina &other) {

    pret = other.pret;
    material = other.material;
    stil = other.stil;
    return *this;
}

Haina::Haina(float pret, std::string material) :pret(pret),material(std::move(material)){}

Haina::Haina(const Haina &other) : pret(other.pret), material(other.material) {
}

[[maybe_unused]] float Haina::getPret() const {
    return pret;
}

[[maybe_unused]] std::string Haina::getMaterial() {
    return material;
}

std::ostream &operator<<(std::ostream &os, const Haina &hn) {
    os << "Obiect: Haina, Pret: " << hn.pret << ", material: " << hn.material <<", stil:"<<hn.stil<<"\n";
    return os;
}

[[maybe_unused]] void Haina::afisare() {
    std::cout << "Obiect: Haina, Pret: " << pret << ", material: " << material <<", stil:"<<stil<<"\n";
}
[[maybe_unused]] bool Haina::matches(Haina haina){
    return true;
}

Haina::Haina(float pret, const std::string &material, const std::string &stil) : pret(pret), material(material),
                                                                                 stil(stil) {}

const std::string &Haina::getStil() const {
    return stil;
}

void Haina::setStil(const std::string &stil) {
    Haina::stil = stil;
}
