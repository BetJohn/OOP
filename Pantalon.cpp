//
// Created by IoanB on 06.04.2022.
//

#include "Pantalon.h"
#include <iostream>
[[maybe_unused]] int Pantalon::getMarime() const {
    return marime;
}

[[maybe_unused]] const std::string &Pantalon::getCuloare() const {
    return culoare;
}

void Pantalon::afisare() {
    std::cout<< "Obiect: Pantalon, Pret: " << pret << ", material: " << material <<", marime: "<<marime;
    if(lungi)
        std::cout<<", pantaloni: lungi";
    else
        std::cout<<", pantaloni: scurti";
    std::cout<< ", culoare : " << culoare << ", stil: " << stil<< "\n";
}

Pantalon::Pantalon(const Pantalon &other) :Haina(other),marime(other.marime),lungi(other.lungi),culoare(other.culoare) {
    std::cout << "Constr de copiere Pantalon\n";
}

Pantalon &Pantalon::operator=(const Pantalon &other) {
    pret = other.pret;
    material = other.material;
    marime  = other.marime;
    lungi = other.lungi;
    stil = other.stil;
    culoare = other.culoare;
    std::cout << "operator= copiere Pantalon\n";
    return *this;
}

std::ostream &operator<<(std::ostream &os, Pantalon pt) {
    pt.afisare();
    return os;
}


Pantalon::Pantalon(float pret, const std::string &material, const std::string &stil, int marime, bool lungi,
                   const std::string &culoare) : Haina(pret, material, stil), marime(marime), lungi(lungi),
                                                 culoare(culoare) {}

bool Pantalon::matches(std::shared_ptr<Haina> haina)const {
    if(haina->getStil().compare("Vintage")==0 && !this->isLungi())
        return false;
    if(haina->getStil().compare("Country")==0 && !this->isLungi())
        return false;
    return true;
}

Pantalon::Pantalon() {}

bool Pantalon::isLungi() const {
    return lungi;
}
