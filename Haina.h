//
// Created by IoanB on 03.03.2022.
//

#ifndef OOP_HAINA_H
#define OOP_HAINA_H

#include <string>
#include <utility>
#include <memory>
#include "iostream"
class Haina{
public:

protected:
    float pret{};
    std::string material;
    std::string stil;
public:

    Haina() = default;
    Haina(float pret, std::string material);

    const std::string &getStil() const;

    Haina(float pret, const std::string &material, const std::string &stil);

    Haina(const Haina& other);

    [[maybe_unused]] [[nodiscard]] float getPret() const;

    [[maybe_unused]] std::string getMaterial();

    [[maybe_unused]] virtual void afisare();

    [[maybe_unused]] [[nodiscard]] virtual std::shared_ptr<Haina> clone() const{
        return nullptr;
    }

    [[maybe_unused]] virtual bool matches(std::shared_ptr<Haina> haina)const{return 0;};
};


#endif //OOP_HAINA_H
