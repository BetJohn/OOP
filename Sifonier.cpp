//
// Created by IoanB on 03.03.2022.
//

#include "Sifonier.h"

#include <utility>

void Sifonier::afisare_haine() {
    for(const auto& haina:h_haine)
        std::cout<<*haina;
}

void Sifonier::afisare_pantofi() {
    for(int i=0;i<nr_pantofi;i++)
        std::cout<<p_pantofi[i];
}

Sifonier::Sifonier(int nrPantofi, int nrHaine, const std::vector<std::shared_ptr<Haina>> &hHaine,
                   std::vector<Pantof> pPantofi) : nr_pantofi(nrPantofi), nr_haine(nrHaine),
                                                          p_pantofi(std::move(pPantofi)) {
    for(const auto& haina:hHaine){
        h_haine.emplace_back(haina);
    }
}

[[maybe_unused]] const std::vector<std::shared_ptr<Haina>> &Sifonier::getHHaine() const {
    return h_haine;
}

[[maybe_unused]] const std::vector<Pantof> &Sifonier::getPPantofi() const {
    return p_pantofi;
}
