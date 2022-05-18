//
// Created by IoanB on 18.05.2022.
//

#ifndef HAINA_H_PALARIE_H
#define HAINA_H_PALARIE_H


#include "Haina.h"

class Palarie : public  Haina {
private:
    char sex;
public:
    Palarie(float pret, const std::string &material, const std::string &stil, char sex, const std::string &forma);

    const std::string &getStil() const override;

    void afisare() override;

    std::shared_ptr<Haina> clone() const override;

    bool matches(Haina haina) override;

private:
    std::string forma;
};

const std::string &Palarie::getStil() const {
    return Haina::getStil();
}

void Palarie::afisare() {
    Haina::afisare();
}

std::shared_ptr<Haina> Palarie::clone() const {
    return Haina::clone();
}

bool Palarie::matches(Haina haina) {
    return Haina::matches(haina);
}


#endif //HAINA_H_PALARIE_H
