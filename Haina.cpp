//
// Created by IoanB on 03.03.2022.
//

#include "Haina.h"

#include <utility>
#include "ExceptiePret.h"
Haina::Haina(float pret, std::string material) :pret(pret),material(std::move(material)){}

Haina::Haina(const Haina &other) : pret(other.pret), material(other.material) {
}

[[maybe_unused]] float Haina::getPret() const {
    return pret;
}

[[maybe_unused]] std::string Haina::getMaterial() {
    return material;
}

Haina::Haina(float pret, std::string material,
             std::string stil) : pret(pret), material(std::move(material)),
                                                                                 stil(std::move(stil)) {
    if(pret<0)
        throw ExceptiePret("Pretul nu poate fi negativ!\n");
}

const std::string &Haina::getStil() const {
    return stil;
}

std::ostream &operator<<(std::ostream &os, const Haina &haina) {
    haina.afisare(os);
    return os;
}

void Haina::afisare(std::ostream &os) const {
    os << "pret: " << pret << " material: " << material << " stil: " << stil;
}
