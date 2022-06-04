//
// Created by IoanB on 04.06.2022.
//

#include "OutfitBuilder.h"
#include "ExceptieModa.h"


[[maybe_unused]] Outfit OutfitBuilder::build() {
    for(const auto& h1 : outfit.haineAlese)
        for(const auto& h2 : outfit.haineAlese)
            if(h1 != h2 && !h1->matches(h2))
                    throw ExceptieModa("Hainele astea nu se potrivesc, va trebui sa le alegi din nou..\n");


    return outfit;
}

[[maybe_unused]] OutfitBuilder &OutfitBuilder::camasa(const std::shared_ptr<Camasa> &camasa) {
    outfit.haineAlese.emplace_back(camasa);
    return *this;
}

[[maybe_unused]] OutfitBuilder &OutfitBuilder::pantalon(const std::shared_ptr<Pantalon> &pantalon) {
    outfit.haineAlese.emplace_back(pantalon);
    return *this;
}

[[maybe_unused]] OutfitBuilder &OutfitBuilder::palarie(const std::shared_ptr<Palarie> &palarie) {
    outfit.haineAlese.emplace_back(palarie);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Outfit &outfit) {
    for(const auto& haina: outfit.haineAlese)
        std::cout<<*haina<<" ";
    return os;
}
