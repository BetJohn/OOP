//
// Created by IoanB on 06.04.2022.
//

#ifndef MAIN_CPP_PANTALON_H
#define MAIN_CPP_PANTALON_H


#include "Haina.h"

class Pantalon: public Haina{
protected:
    int marime;
    bool lungi;
    std::string stil;
    std::string culoare;
public:
    Pantalon(float pret, const std::string &material, int marime, bool lungi, const std::string &stil,
             const std::string &culoare);

    Pantalon(const Pantalon& other);
    Pantalon& operator=(const Pantalon& other);

    [[nodiscard]] int getMarime() const;

    [[nodiscard]] bool isLungi() const;

    [[nodiscard]] const std::string &getStil() const;

    void afisare() override;

    [[nodiscard]] const std::string &getCuloare() const;
    friend std::ostream& operator<<(std::ostream& os, const Pantalon& pt);
};


#endif //MAIN_CPP_PANTALON_H
