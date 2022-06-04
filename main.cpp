#include <iostream>
#include "Haina.h"
#include "Pantof.h"
#include "Sifonier.h"
#include "Pantalon.h"
#include "Camasa.h"
#include "Palarie.h"
#include "Haina_factory.h"
#include "PantofBuilder.h"
#include "Sursa.h"
#include "Aplicatie.h"
#include <vector>
#include <fstream>
#include <memory>
int main()
{
    std:: ifstream fin("date.in");
    int nr_pantofi,nr_haine,marime;
    float pret;
    std::string stil;
    [[maybe_unused]] bool esteLung;
    std::string tipHaina;
    std::string material;
    fin>>nr_haine>>nr_pantofi;
    std:: vector <std::shared_ptr<Haina>> haine;
    std:: vector <Pantof> pantofi(nr_pantofi);
    for(int i=0;i<nr_haine;i++){
        if(i==0)
            fin.get();
        std::getline(fin,tipHaina);
            if(tipHaina=="Haina"){
                fin>>pret;
                fin.get();
                std::getline(fin, material);
                std::getline(fin, stil);
                auto haina = std::make_shared<Haina>(pret,material,stil);
                haine.emplace_back(haina);
            }
            else if(tipHaina=="Pantalon"){
                fin>>pret;
                fin.get();
                std::getline(fin, material);
                std::getline(fin, stil);
                fin>>marime;
                fin>>esteLung;
                fin.get();
                std::string culoare;
                std::getline(fin, culoare);
                auto pantalon = std::make_shared<Pantalon>(pret,material,stil,marime,esteLung,culoare);
                haine.emplace_back(pantalon);
            }
            else if(tipHaina=="Palarie"){
                fin>>pret;
                fin.get();
                std::getline(fin, material);
                std::getline(fin, stil);
                char sex;
                std::string forma;
                fin>>sex;
                fin.get();
                std::getline(fin,forma);
                auto palarie = std::make_shared<Palarie>(pret,material,stil,sex,forma);
                haine.emplace_back(palarie);
            }
            else{
                fin>>pret;
                fin.get();
                std::getline(fin, material);
                std::getline(fin, stil);
                fin>>esteLung;
                fin.get();
                std::string culoare;
                std::getline(fin, culoare);
                auto haina = std::make_shared<Camasa>(pret,material,stil,esteLung,culoare);
                haine.emplace_back(haina);
            }
    }
    for(int i=0;i<nr_pantofi;i++) {
        fin >> pret;
        fin.get();
        std::getline(fin, material);
        fin >> marime;
        pantofi[i] = Pantof(pret, material, marime);
    }
    Pantalon blugi = Haina_factory::blugi();
    PantofBuilder pantofBuilder;
    Pantof pantof = pantofBuilder.marime(10).pret(50).build();
    std::cout<<"Apelul functie show folosind template un pantof:\n";
    show<Pantof>(pantof);
    show<Pantalon>(blugi);
    Sifonier Sifonierul_nostru = Sifonier{nr_pantofi,nr_haine,haine,pantofi};
    Aplicatie::meniu(Sifonierul_nostru);
    return 0;
}