//
// Created by IoanB on 06.04.2022.
//

#include "Pantalon.h"
#include <iostream>
#include <utility>
Pantalon::Pantalon(float pret, const std::string &material, int marime, bool lungi, std::string stil,
                   std::string culoare) : Haina(pret, material), marime(marime), lungi(lungi), stil(std::move(stil)),
                                                 culoare(std::move(culoare)) {}

[[maybe_unused]] int Pantalon::getMarime() const {
    return marime;
}

[[maybe_unused]] bool Pantalon::isLungi() const {
    return lungi;
}

[[maybe_unused]] const std::string &Pantalon::getStil() const {
    return stil;
}

[[maybe_unused]] const std::string &Pantalon::getCuloare() const {
    return culoare;
}

void Pantalon::afisare() {
    std::cout<<marime<<"\n"<<stil<<"\n"<<culoare<<"\n";
}

Pantalon::Pantalon(const Pantalon &other) :Haina(other),marime(other.marime),lungi(other.lungi),stil(other.stil),culoare(other.culoare) {
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

std::ostream &operator<<(std::ostream &os, const Pantalon &pt) {
    os << "Pret: " << pt.pret << ", material: " << pt.material <<", marime: "<<pt.marime;
    if(pt.lungi)
        os<<", pantaloni: lungi";
    else
        os<<", pantaloni: scurti";
    os << ", culoare : " << pt.culoare << ", stil: " << pt.stil<< "\n";
    return os;
}
