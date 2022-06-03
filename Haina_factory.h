//
// Created by IoanB on 30.05.2022.
//

#ifndef MAIN_CPP_HAINA_FACTORY_H
#define MAIN_CPP_HAINA_FACTORY_H


#include "Haina.h"
#include "Pantalon.h"
#include "Camasa.h"

class [[maybe_unused]] Haina_factory {
public:
    [[maybe_unused]] static Haina tricou(){
        return {10,"bumbac","Vara"};
    }

    [[maybe_unused]] static Haina maieu(){
        return {10,"celuloza","sala"};
    }

    [[maybe_unused]] static Haina lenjerie(){
        return {20,"bumbac","noapte"};
    }

    [[maybe_unused]] static Pantalon blugi(){
        return {50,"blug","liceu",32,true,"albastru"};
    }

    [[maybe_unused]] static Pantalon bermude(){
        return {20,"costum de baie","plaja",30, false,"verde"};
    }

    [[maybe_unused]] static Camasa camasa_office(){
        return {50,"bumbac","office",true,"alba"};
    }

    [[maybe_unused]] static Camasa camasa_party(){
        return {40,"bumbac","Party",false,"Violet"};
    }
};


#endif //MAIN_CPP_HAINA_FACTORY_H
