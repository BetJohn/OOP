//
// Created by IoanB on 18.05.2022.
//

#ifndef HAINA_H_EXCEPTIEPRET_H
#define HAINA_H_EXCEPTIEPRET_H


#include "Exceptie.h"
#include <iostream>
class ExceptiePret : public Exceptie {
public:
    explicit ExceptiePret(const std::string &arg) : Exceptie(arg){}
};


#endif //HAINA_H_EXCEPTIEPRET_H
