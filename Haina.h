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
    float pret;
    std::string material;
public:
    Haina() = default;
    Haina(float pret, std::string material);
    Haina(const Haina& other);
    Haina& operator=(const Haina& other);
    [[nodiscard]] float getPret() const;
    std::string getMaterial();
    friend std::ostream& operator<<(std::ostream& os, const Haina& hn);
    virtual void afisare();

};


#endif //OOP_HAINA_H
