//
// Created by IoanB on 03.03.2022.
//

#ifndef MAIN_CPP_SIFONIER_H
#define MAIN_CPP_SIFONIER_H
#include "Pantof.h"
#include "Haina.h"
#include <vector>
#include "iostream"
class Sifonier {
private:
protected:
    int nr_pantofi{};
    int nr_haine{};
    std:: vector <Haina> h_haine;
    std:: vector <Pantof> p_pantofi;
public:
    Sifonier() = default;
    Sifonier(int nr_pantofi, int nr_haine, std::vector <Pantof> pantofi,std::vector <Haina> haine):nr_pantofi(nr_pantofi),nr_haine(nr_haine) {
        for(int i=0;i<nr_pantofi;i++) {
            p_pantofi.emplace_back(pantofi[i].getPret(), pantofi[i].getMaterial(), pantofi[i].getMarime());
        }
        for(int i=0;i<nr_haine;i++) {
            h_haine.emplace_back(haine[i].getPret(), haine[i].getMaterial());
        }
    }
    void afisare_haine(){
        for(int i=0;i<nr_haine;i++)
            std::cout<<h_haine[i];
    }
    void afisare_pantofi(){
         for(int i=0;i<nr_pantofi;i++)
             std::cout<<p_pantofi[i];
    }
};
#endif //MAIN_CPP_SIFONIER_H
