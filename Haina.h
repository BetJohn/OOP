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

    [[nodiscard]] const std::string &getStil() const;

    Haina(float pret, std::string material, std::string stil);

    Haina(const Haina& other);

    [[maybe_unused]] std::string getMaterial();

    virtual void afisare(std::ostream &os) const ;

    friend std::ostream &operator<<(std::ostream &os, const Haina &haina);

    [[maybe_unused]] [[nodiscard]] virtual std::shared_ptr<Haina> clone() const{
        return nullptr;
    }

    [[maybe_unused]] [[nodiscard]] virtual bool matches(std::shared_ptr<Haina> haina)const{return false;};
};


#endif //OOP_HAINA_H
