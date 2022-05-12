//
// Created by IoanB on 06.04.2022.
//

#ifndef MAIN_CPP_PANTALON_H
#define MAIN_CPP_PANTALON_H


#include "Haina.h"

class [[maybe_unused]] Pantalon: public Haina{
protected:
    int marime;
    bool lungi;
    std::string culoare;
public:
    Pantalon(const Pantalon& other);

    [[maybe_unused]] void setLungi(bool lungi);

    bool matches(Haina haina) override;

    Pantalon(float pret, const std::string &material, const std::string &stil, int marime, bool lungi,
             const std::string &culoare);

    Pantalon& operator=(const Pantalon& other);
    [[maybe_unused]] [[nodiscard]] int getMarime() const;

    bool isLungi() const;

    void afisare() override;

    [[maybe_unused]] [[nodiscard]] const std::string &getCuloare() const;

    Pantalon();

    [[nodiscard]] std::shared_ptr<Haina> clone() const override {
        return std::make_shared <Pantalon>(*this);
    }
};


#endif //MAIN_CPP_PANTALON_H
