//
// Created by IoanB on 03.03.2022.
//

#ifndef OOP_PANTOF_H
#define OOP_PANTOF_H
#include <string>
#include <utility>
#include <iostream>

class Pantof {
private:
protected:
    float pret{};
    std::string material;
    int marime{};
public:
    Pantof() = default;
    Pantof(float pret, std::string material, int marime):pret(pret), material(std::move(material)), marime(marime){}
    [[nodiscard]] float getPret() const
    {
        return this->pret;
    }
    std::string getMaterial()
    {
        return material;
    }
    [[nodiscard]] int getMarime() const
    {
        return marime;
    }
    friend std::ostream& operator<<(std::ostream& os, const Pantof& pt) {
        os << "Pret: " << pt.pret << ", material: " << pt.material <<", marime: "<<pt.marime<<"\n";
        return os;
    }
};

#endif //OOP_PANTOF_H
