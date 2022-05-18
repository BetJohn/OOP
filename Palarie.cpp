//
// Created by IoanB on 18.05.2022.
//

#include "Palarie.h"

Palarie::Palarie(float pret, const std::string &material, const std::string &stil, char sex, const std::string &forma)
        : Haina(pret, material, stil), sex(sex), forma(forma) {}
