//
// Created by IoanB on 28.03.2022.
//

#include "Camasa.h"


[[maybe_unused]] bool Camasa::isManecaLunga() const {
    return maneca_lunga;
}

[[maybe_unused]] const std::string &Camasa::getCuloare() const {
    return culoare;
}
void Camasa::afisare() {

    std::cout<< "Obiect: Camasa, Pret: " << pret << ", material: " << material<< ", stil: " << stil;
    std::cout<< ", culoare : " << culoare;
    if(maneca_lunga)
        std::cout<<"Maneca lunga\n";
    else
        std::cout<<"Maneca scurta\n";
}

[[maybe_unused]] bool Camasa::matches(const std::shared_ptr<Haina> haina)const{
    if(haina->getStil().compare("Party")==0 && this->material.substr(0,5).compare("Piele")==0)
        return false;
    if(haina->getStil().compare("Vintage")==0 && !this->isManecaLunga())
        return false;
    return true;
}

Camasa::Camasa(float pret, const std::string &material, const std::string &stil, bool manecaLunga,
               const std::string &culoare) : Haina(pret, material, stil), maneca_lunga(manecaLunga), culoare(culoare) {}

Camasa::Camasa() {}
