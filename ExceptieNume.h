//
// Created by IoanB on 18.05.2022.
//

#ifndef HAINA_H_EXCEPTIENUME_H
#define HAINA_H_EXCEPTIENUME_H


#include "Exceptie.h"

class ExceptieNume : public Exceptie{
public:
    ExceptieNume(const std::string &arg) : Exceptie(arg){}
};


#endif //HAINA_H_EXCEPTIENUME_H
