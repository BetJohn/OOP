//
// Created by IoanB on 28.03.2022.
//

#include "Camasa.h"

#include <utility>


[[maybe_unused]] bool Camasa::isManecaLunga() const {
    return maneca_lunga;
}

[[maybe_unused]] bool Camasa::matches(const std::shared_ptr<Haina> haina)const{
    if(haina->getStil()=="Party" && this->material.substr(0,5)=="Piele")
        return false;
    if(haina->getStil()=="Vintage" && !this->isManecaLunga())
        return false;
    return true;
}

Camasa::Camasa(float pret, const std::string &material, const std::string &stil, bool manecaLunga,
               std::string culoare) : Haina(pret, material, stil), maneca_lunga(manecaLunga), culoare(std::move(culoare)) {}

void Camasa::afisare(std::ostream &os) const {
    std::cout<<"\n";
    std::cout<<"Obiect: Camasa, ";
    Haina::afisare(os);
    const auto& opl = *this;
    std::cout<< ", culoare : " << opl.culoare;
    if(opl.maneca_lunga)
        std::cout<<" Maneca lunga\n";
    else
        std::cout<<" Maneca scurta\n";
}

std::ostream &operator<<(std::ostream &os, const Camasa &camasa) {
    camasa.afisare(os);
    return os;
}

Camasa &Camasa::operator=(const Camasa& other) {
    pret = other.pret;
    material = other.material;
    stil = other.stil;
    culoare = other.culoare;
    maneca_lunga = other.maneca_lunga;
    return *this;
}

std::string Camasa::getType() {
    return "Camasa";
}