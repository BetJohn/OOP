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
    friend class PantofBuilder;
public:
    Pantof() = default;
    Pantof(float pret, std::string material, int marime);

    [[maybe_unused]] [[nodiscard]] float getPret() const;

    [[maybe_unused]] std::string getMaterial();
    Pantof(const Pantof& other);
    Pantof& operator=(const Pantof& other);

    [[maybe_unused]] [[nodiscard]] int getMarime() const;
    friend std::ostream& operator<<(std::ostream& os, const Pantof& pt);
};

#endif //OOP_PANTOF_H
