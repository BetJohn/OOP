//
// Created by IoanB on 17.05.2022.
//

#ifndef HAINA_H_EXCEPTIE_H
#define HAINA_H_EXCEPTIE_H

#include <exception>
#include <iostream>

class Exceptie : public std::exception{
public:
    void mesaj(){
        std::cout<<"Numele introdus este cam gol"<<std::endl;
    }
};


#endif //HAINA_H_EXCEPTIE_H
