//
// Created by IoanB on 29.04.2022.
//

#ifndef HAINA_H_PERSOANA_H
#define HAINA_H_PERSOANA_H


#include <string>
#include "Haina.h"
#include "Pantalon.h"
#include "Camasa.h"
#include "Pantof.h"

class [[maybe_unused]] Persoana {
private:
    [[maybe_unused]] int id{};
    std::string name;
    Pantalon pantalon;
    Camasa camasa;
public:
    [[maybe_unused]] int getId() const;

public:
    [[maybe_unused]] Persoana(int id, std::string name, const Pantalon &pantalon, const Camasa &camasa, const Pantof &pantof,
             int scor);

private:
    Pantof pantof;
    int scor;
public:
    [[maybe_unused]] [[nodiscard]] const std::string &
    getName() const;

    [[maybe_unused]] [[nodiscard]] const Pantalon &getPantalon() const;

    [[maybe_unused]] [[nodiscard]] const Camasa &getCamasa() const;

    [[maybe_unused]] [[nodiscard]] const Pantof &getPantof() const;

    [[maybe_unused]] [[nodiscard]] int getScor() const;

public:
};


#endif //HAINA_H_PERSOANA_H
