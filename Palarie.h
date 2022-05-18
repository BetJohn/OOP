//
// Created by IoanB on 18.05.2022.
//

#ifndef HAINA_H_PALARIE_H
#define HAINA_H_PALARIE_H


#include "Haina.h"

class [[maybe_unused]] Palarie : public  Haina {
protected:
    std::string forma;
    char sex;
public:
    [[maybe_unused]] Palarie(float pret, const std::string &material, const std::string &stil, char sex, const std::string &forma);

    void afisare() override;

    bool matches(std::shared_ptr<Haina> haina)const override;

    [[maybe_unused]] char getSex() const;

    [[maybe_unused]] const std::string &getForma() const;
};




#endif //HAINA_H_PALARIE_H
