//
// Created by IoanB on 18.05.2022.
//

#ifndef HAINA_H_PALARIE_H
#define HAINA_H_PALARIE_H


#include <ostream>
#include "Haina.h"

class [[maybe_unused]] Palarie : public  Haina {
protected:
    std::string forma;
    char sex;
public:
    [[maybe_unused]] Palarie(float pret, const std::string &material, const std::string &stil, char sex, std::string forma);

    friend std::ostream &operator<<(std::ostream &os, const Palarie &palarie);

    Palarie& operator=(const Palarie& other);

    std::string getType() override;

    void afisare(std::ostream &os) const override;

    [[nodiscard]] bool matches(std::shared_ptr<Haina> haina)const override;
};




#endif //HAINA_H_PALARIE_H
