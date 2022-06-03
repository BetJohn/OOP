//
// Created by IoanB on 06.04.2022.
//

#include "Pantalon.h"
#include <iostream>
#include <utility>

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

std::ostream &operator<<(std::ostream &os, const Pantalon& pt) {
    pt.afisare(os);
    return os;
}


Pantalon::Pantalon(float pret, const std::string &material, const std::string &stil, int marime, bool lungi,
                   std::string culoare) : Haina(pret, material, stil), marime(marime), lungi(lungi),
                                                 culoare(std::move(culoare)) {}

bool Pantalon::matches(std::shared_ptr<Haina> haina)const {
    if(haina->getStil()=="Vintage" && !this->isLungi())
        return false;
    if(haina->getStil()=="Country" && !this->isLungi())
        return false;
    return true;
}

Pantalon::Pantalon() = default;

bool Pantalon::isLungi() const {
    return lungi;
}

void Pantalon::afisare(std::ostream &os) const {
    std::cout<<"\n";
    std::cout<<"Obiect: Pantalon, ";
    Haina::afisare(os);
    const auto& opl = *this;
    if(opl.lungi)
        os<<", pantaloni: lungi";
    else
        os<<", pantaloni: scurti";
    os<< ", culoare : " << culoare << ", stil: " << stil<< "\n";
}
