//
// Created by IoanB on 28.03.2022.
//

#ifndef MAIN_CPP_CAMASA_H
#define MAIN_CPP_CAMASA_H

#include <ostream>
#include "Haina.h"

class [[maybe_unused]] Camasa: public Haina{
protected:
    bool maneca_lunga{};
    std::string culoare;
public:
    [[maybe_unused]] [[nodiscard]] bool isManecaLunga() const;


    Camasa(float pret, const std::string &material, const std::string &stil, bool manecaLunga,
           std::string culoare);

    Camasa();

    void afisare(std::ostream &os) const override;


    [[maybe_unused]] [[nodiscard]] std::shared_ptr<Haina> clone() const override {
        return std::make_shared <Camasa>(*this);
    }

    friend std::ostream &operator<<(std::ostream &os, const Camasa &camasa);

    [[nodiscard]] bool matches(std::shared_ptr<Haina> haina)const override;
};


#endif //MAIN_CPP_CAMASA_H
