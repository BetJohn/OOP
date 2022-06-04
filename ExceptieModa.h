//
// Created by IoanB on 04.06.2022.
//

#ifndef MAIN_CPP_EXCEPTIEMODA_H
#define MAIN_CPP_EXCEPTIEMODA_H


#include "Exceptie.h"

class ExceptieModa : public Exceptie{
public:
    explicit ExceptieModa(const std::string &arg): Exceptie(arg){}

};


#endif //MAIN_CPP_EXCEPTIEMODA_H
