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
