//
// Created by IoanB on 28.03.2022.
//

#ifndef MAIN_CPP_CAMASA_H
#define MAIN_CPP_CAMASA_H
#include "Haina.h"

class Camasa: public Haina{
protected:
    bool maneca_lunga;
    std::string stil;
    std::string culoare;
public:
    bool isManecaLunga() const;

    Camasa(float pret, const std::string &material, bool manecaLunga, const std::string &stil,
           const std::string &culoare);
    Camasa(const Camasa& other) :maneca_lunga(other.maneca_lunga),stil(other.stil),culoare(other.culoare){
        std::cout << "Constr de copiere Camasa\n";
    }
    Camasa& operator=(const Camasa& other) {
        pret = other.pret;
        material = other.material;
        stil = other.stil;
        maneca_lunga = other.maneca_lunga;
        culoare = other.culoare;
        std::cout << "operator= copiere Camasa\n";
        return *this;
    }
    void afisare() override;

    const std::string &getStil() const;

    const std::string &getCuloare() const;
};


#endif //MAIN_CPP_CAMASA_H
