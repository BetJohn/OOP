//
// Created by IoanB on 29.04.2022.
//

#include "Persoana.h"

#include <utility>

[[maybe_unused]] const std::string &Persoana::getName() const {
    return name;
}

[[maybe_unused]] const Pantalon &Persoana::getPantalon() const {
    return pantalon;
}

[[maybe_unused]] const Camasa &Persoana::getCamasa() const {
    return camasa;
}

[[maybe_unused]] const Pantof &Persoana::getPantof() const {
    return pantof;
}
[[maybe_unused]] int Persoana::getScor() const {
    return scor;
}

[[maybe_unused]] Persoana::Persoana(int id, std::string name, const Pantalon &pantalon, const Camasa &camasa,
                   const Pantof &pantof, int scor) : id(id), name(std::move(name)), pantalon(pantalon), camasa(camasa),
                                                     pantof(pantof), scor(scor) {}

[[maybe_unused]] int Persoana::getId() const {
    return id;
}
