//
// Created by IoanB on 28.03.2022.
//

#include "Camasa.h"

bool Camasa::isManecaLunga() const {
    return maneca_lunga;
}

const std::string &Camasa::getStil() const {
    return stil;
}

const std::string &Camasa::getCuloare() const {
    return culoare;
}
void Camasa::afisare() {
    std::cout<<stil<<"\n"<<culoare<<"\n";
    if(maneca_lunga)
        std::cout<<"Maneca lunga\n";
    else
        std::cout<<"Maneca scurta\n";
}

Camasa::Camasa(float pret, const std::string &material, bool manecaLunga, const std::string &stil,
               const std::string &culoare) : Haina(pret, material), maneca_lunga(manecaLunga), stil(stil),
                                             culoare(culoare) {}

Camasa &Camasa::operator=(const Camasa &other) {
    pret = other.pret;
    material = other.material;
    stil = other.stil;
    maneca_lunga = other.maneca_lunga;
    culoare = other.culoare;
    std::cout << "operator= copiere Camasa\n";
    return *this;
}

Camasa::Camasa(const Camasa &other) :maneca_lunga(other.maneca_lunga),stil(other.stil),culoare(other.culoare){
    std::cout << "Constr de copiere Camasa\n";
}
