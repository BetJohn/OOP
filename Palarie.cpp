//
// Created by IoanB on 18.05.2022.
//

#include "Palarie.h"

#include <utility>

[[maybe_unused]] Palarie::Palarie(float pret, const std::string &material, const std::string &stil, char sex, std::string forma)
        : Haina(pret, material, stil), sex(sex), forma(std::move(forma)) {}

bool Palarie::matches(const std::shared_ptr<Haina> haina) const {
    if(forma!="rotunda" && haina->getStil()=="Party")
        return false;
    if(forma == "patrata" && haina->getStil()=="Vintage")
        return false;
    return true;

}

[[maybe_unused]] char Palarie::getSex() const {
    return sex;
}

[[maybe_unused]] const std::string &Palarie::getForma() const {
    return forma;
}

std::ostream &operator<<(std::ostream &os, const Palarie &palarie) {
    palarie.afisare(os);
    return os;
}

void Palarie::afisare(std::ostream &os) const {
    std::cout<<"\n";
    std::cout<<"Obiect: Palarie, ";
    Haina::afisare(os);
    const auto& opl = *this;
    std::cout<<", Forma: "<<opl.forma;
    if(sex == 'M')
        std::cout<<", Sex: Masculin\n";
    else
        std::cout<<", Sex: Feminin\n";
}
