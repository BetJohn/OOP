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
    Camasa(const Camasa& other);
    Camasa& operator=(const Camasa& other);
    void afisare() override;

    const std::string &getStil() const;

    const std::string &getCuloare() const;
};


#endif //MAIN_CPP_CAMASA_H
