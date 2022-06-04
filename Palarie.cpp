//
// Created by IoanB on 18.05.2022.
//

#include "Palarie.h"

#include <utility>

[[maybe_unused]] Palarie::Palarie(float pret, const std::string &material, const std::string &stil, char sex, std::string forma)
        : Haina(pret, material, stil), sex(sex), forma(std::move(forma)) {}

bool Palarie::matches(const std::shared_ptr<Haina> haina) const {
    if(forma=="Rotunda" && haina->getStil()=="Party")
        return false;
    if(forma == "Patrata" && haina->getStil()=="Vintage")
        return false;
    return true;

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

Palarie &Palarie::operator=(const Palarie &other) {
    pret = other.pret;
    material = other.material;
    stil = other.stil;
    forma = other.forma;
    sex = other.sex;
    return *this;
}

std::string Palarie::getType() {
    return "Palarie";
}

Palarie::Palarie(float pret, const std::string &material, const std::string &stil) : Haina(pret, material, stil) {}
