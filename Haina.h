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
private:
protected:
    float pret{};
    std::string material;
public:
    Haina() = default;
    Haina(float pret, std::string material);
    Haina(const Haina& other);
    Haina& operator=(const Haina& other);

    [[maybe_unused]] [[nodiscard]] float getPret() const;

    [[maybe_unused]] std::string getMaterial();
    friend std::ostream& operator<<(std::ostream& os, const Haina& hn);

    [[maybe_unused]] virtual void afisare();

    [[maybe_unused]] [[nodiscard]] virtual std::shared_ptr<Haina> clone() const{
        return nullptr;
    }
};


#endif //OOP_HAINA_H
