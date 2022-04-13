//
// Created by IoanB on 03.03.2022.
//

#include "Haina.h"

Haina &Haina::operator=(const Haina &other) {
    pret = other.pret;
    material = other.material;
    std::cout << "operator= copiere Haina\n";
    return *this;
}

Haina::Haina(float pret, std::string material) :pret(pret),material(std::move(material)){}

Haina::Haina(const Haina &other) : pret(other.pret), material(other.material) {
    std::cout << "Constr de copiere Haina\n";
}

[[maybe_unused]] float Haina::getPret() const {
    return pret;
}

[[maybe_unused]] std::string Haina::getMaterial() {
    return material;
}

std::ostream &operator<<(std::ostream &os, const Haina &hn) {
    os << "Pret: " << hn.pret << ", material: " << hn.material << "\n";
    return os;
}

[[maybe_unused]] void Haina::afisare() {
    std::cout<<material<<"\n"<<pret<<"\n";
}
