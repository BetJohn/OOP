//
// Created by IoanB on 03.03.2022.
//

#include "Haina.h"
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

[[maybe_unused]] void Haina::afisare() {
    std::cout << "Obiect: Haina, Pret: " << pret << ", material: " << material <<", stil:"<<stil<<"\n";
}

Haina::Haina(float pret, const std::string &material, const std::string &stil) : pret(pret), material(material),
                                                                                 stil(stil) {
    if(pret<0)
        throw ExceptiePret("Pretul nu poate fi negativ!\n");
}

const std::string &Haina::getStil() const {
    return stil;
}
