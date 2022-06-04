//
// Created by IoanB on 04.06.2022.
//

#ifndef MAIN_CPP_OUTFIT_H
#define MAIN_CPP_OUTFIT_H


#include <vector>
#include "Pantof.h"
#include "Pantalon.h"
#include "Camasa.h"
#include "Palarie.h"

class Outfit {
protected:
    std:: vector <std::shared_ptr<Haina>> haineAlese;
    friend class OutfitBuilder;
};


#endif //MAIN_CPP_OUTFIT_H
