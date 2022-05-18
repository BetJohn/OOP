//
// Created by IoanB on 18.05.2022.
//

#include "Palarie.h"

[[maybe_unused]] Palarie::Palarie(float pret, const std::string &material, const std::string &stil, char sex, const std::string &forma)
        : Haina(pret, material, stil), sex(sex), forma(forma) {}

bool Palarie::matches(const std::shared_ptr<Haina> haina) const {
    if(!forma.compare("rotunda") && haina->getStil().compare("Party"))
        return 0;
    if(!forma.compare("patrata") && haina->getStil().compare("Vintage"))
        return 0;
    return 1;

}
void Palarie::afisare() {
    std::cout<< "Obiect: Palarie, Pret: " << pret << ", material: " << material <<", forma: "<<forma;
    if(sex == 'M')
        std::cout<<", Sex: Masculin\n";
    else
        std::cout<<", Sex: Feminin\n";

}

[[maybe_unused]] char Palarie::getSex() const {
    return sex;
}

[[maybe_unused]] const std::string &Palarie::getForma() const {
    return forma;
}
