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
public:
    void setStil(const std::string &stil);

protected:
    float pret{};
    std::string material;
    std::string stil;
public:

    Haina() = default;
    Haina(float pret, std::string material);

    virtual const std::string &getStil() const;

    Haina(float pret, const std::string &material, const std::string &stil);

    Haina(const Haina& other);
    Haina& operator=(const Haina& other);

    [[maybe_unused]] [[nodiscard]] float getPret() const;

    [[maybe_unused]] std::string getMaterial();
    friend std::ostream& operator<<(std::ostream& os, const Haina& hn);

    [[maybe_unused]] virtual void afisare();

    [[maybe_unused]] [[nodiscard]] virtual std::shared_ptr<Haina> clone() const{
        return nullptr;
    }

    [[maybe_unused]] virtual bool matches(Haina haina);
};


#endif //OOP_HAINA_H
