//
// Created by IoanB on 03.03.2022.
//

#ifndef OOP_HAINA_H
#define OOP_HAINA_H

#include <string>
#include <utility>
#include "iostream"
class Haina {
private:
protected:
    float pret{};
    std::string material;
public:
    Haina() = default;
    Haina(float pret, std::string material):pret(pret),material(std::move(material)){}
    [[nodiscard]] float getPret() const
    {
        return pret;
    }
    std::string getMaterial()
    {
        return material;
    }
    friend std::ostream& operator<<(std::ostream& os, const Haina& hn) {
       os << "Pret: " << hn.pret << ", material: " << hn.material << "\n";
        return os;
    }
};


#endif //OOP_HAINA_H
