//
// Created by IoanB on 17.05.2022.
//

#ifndef HAINA_H_EXCEPTIE_H
#define HAINA_H_EXCEPTIE_H

#include <exception>
#include <iostream>

class Exceptie : public std::invalid_argument{
public:

    explicit Exceptie(const std::string &arg);
};


#endif //HAINA_H_EXCEPTIE_H
