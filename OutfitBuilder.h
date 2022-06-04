//
// Created by IoanB on 04.06.2022.
//

#ifndef MAIN_CPP_OUTFITBUILDER_H
#define MAIN_CPP_OUTFITBUILDER_H


#include "Outfit.h"

class [[maybe_unused]] OutfitBuilder {
private:
    Outfit outfit;
public:
    OutfitBuilder() = default;

    [[maybe_unused]] [[maybe_unused]] OutfitBuilder &camasa(const std::shared_ptr<Camasa>& camasa);

    [[maybe_unused]] [[maybe_unused]] OutfitBuilder &pantalon(const std::shared_ptr<Pantalon>& pantalon);

    [[maybe_unused]] [[maybe_unused]] OutfitBuilder &palarie(const std::shared_ptr<Palarie>& palarie);

    [[maybe_unused]] Outfit build();
};

Outfit &Outfit::operator=(const Outfit &other) {
    for(int i=0;i<haineAlese.size();i++)
        haineAlese[i] = other.haineAlese[i];
    return *this;
}



#endif //MAIN_CPP_OUTFITBUILDER_H
