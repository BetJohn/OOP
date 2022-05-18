//
// Created by IoanB on 03.03.2022.
//

#ifndef MAIN_CPP_SIFONIER_H
#define MAIN_CPP_SIFONIER_H
#include "Pantof.h"
#include "Haina.h"
#include <vector>
#include "iostream"
#include <memory>
class Sifonier {
private:
protected:
    int nr_pantofi{};
    [[maybe_unused]] int nr_haine{};
    std:: vector <std::shared_ptr<Haina>> h_haine;
public:
    [[maybe_unused]] const std::vector<std::shared_ptr<Haina>> &getHHaine() const;

    [[maybe_unused]] const std::vector<Pantof> &getPPantofi() const;

protected:
    std:: vector <Pantof> p_pantofi;
public:
    Sifonier() = default;
//    Sifonier(int nr_pantofi, int nr_haine, std::vector <Pantof> pantofi,std::vector <std::shared_ptr<Haina>> haine);
    void afisare_haine();

    Sifonier(int nrPantofi, int nrHaine, const std::vector<std::shared_ptr<Haina>> &hHaine,
             std::vector<Pantof> pPantofi);

    void afisare_pantofi();
};
#endif //MAIN_CPP_SIFONIER_H
