//
// Created by IoanB on 28.03.2022.
//

#ifndef MAIN_CPP_CAMASA_H
#define MAIN_CPP_CAMASA_H
#include "Haina.h"

class [[maybe_unused]] Camasa: public Haina{
protected:
    bool maneca_lunga;
    std::string stil;
    std::string culoare;
public:
    [[maybe_unused]] [[nodiscard]] bool isManecaLunga() const;

    Camasa(float pret, const std::string &material, bool manecaLunga, std::string stil,
           std::string culoare);
    Camasa(const Camasa& other);
    Camasa& operator=(const Camasa& other);
    void afisare() override;

    [[maybe_unused]] [[nodiscard]] const std::string &getStil() const;

    [[maybe_unused]] [[nodiscard]] const std::string &getCuloare() const;

    [[maybe_unused]] [[nodiscard]] std::shared_ptr<Haina> clone() const override {
        return std::make_shared <Camasa>(*this);
    }
};


#endif //MAIN_CPP_CAMASA_H
