//
// Created by IoanB on 04.06.2022.
//

#ifndef MAIN_CPP_PERSOANA_H
#define MAIN_CPP_PERSOANA_H


#include <utility>
#include <ostream>

#include "Outfit.h"

template<typename T>
class Persoana {
    [[maybe_unused]] T nume;
    [[maybe_unused]] Outfit outfit;
public:
    [[maybe_unused]] Persoana(const T& nume, Outfit outfit) : nume(nume), outfit(std::move(outfit)) {}

    [[maybe_unused]] T getNume() const {
        return nume;
    }

    friend std::ostream &operator<<(std::ostream &os, const Persoana &persoana) {
        os << "nume: " << persoana.nume << ", outfit: " << persoana.outfit;
        return os;
    }
};

#endif //MAIN_CPP_PERSOANA_H
