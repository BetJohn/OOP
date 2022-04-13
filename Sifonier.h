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
    int nr_haine{};
    std:: vector <Haina> h_haine;
    std:: vector <Pantof> p_pantofi;
public:
    Sifonier() = default;
    Sifonier(int nr_pantofi, int nr_haine, std::vector <Pantof> pantofi,std::vector <Haina> haine);
    void afisare_haine();
    void afisare_pantofi();
};
#endif //MAIN_CPP_SIFONIER_H
