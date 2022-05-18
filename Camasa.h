//
// Created by IoanB on 28.03.2022.
//

#ifndef MAIN_CPP_CAMASA_H
#define MAIN_CPP_CAMASA_H
#include "Haina.h"

class [[maybe_unused]] Camasa: public Haina{
protected:
    bool maneca_lunga;
    std::string culoare;
public:
    [[maybe_unused]] [[nodiscard]] bool isManecaLunga() const;


    Camasa(float pret, const std::string &material, const std::string &stil, bool manecaLunga,
           const std::string &culoare);

    Camasa();

    void afisare() override;

    [[maybe_unused]] [[nodiscard]] const std::string &getCuloare() const;

    [[maybe_unused]] [[nodiscard]] std::shared_ptr<Haina> clone() const override {
        return std::make_shared <Camasa>(*this);
    }

    bool matches(std::shared_ptr<Haina> haina)const override;
};


#endif //MAIN_CPP_CAMASA_H
