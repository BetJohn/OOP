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
    std::string stil;
    std::string culoare;
public:
    Pantalon(float pret, const std::string &material, int marime, bool lungi, std::string stil,
             std::string culoare);

    Pantalon(const Pantalon& other);
    Pantalon& operator=(const Pantalon& other);

    [[maybe_unused]] [[nodiscard]] int getMarime() const;

    [[maybe_unused]] [[nodiscard]] bool isLungi() const;

    [[maybe_unused]] [[nodiscard]] const std::string &getStil() const;

    void afisare() override;

    [[maybe_unused]] [[nodiscard]] const std::string &getCuloare() const;
    friend std::ostream& operator<<(std::ostream& os, const Pantalon& pt);
    [[nodiscard]] std::shared_ptr<Haina> clone() const override {
        return std::make_shared <Pantalon>(*this);
    }
};


#endif //MAIN_CPP_PANTALON_H
