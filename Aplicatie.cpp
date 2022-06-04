//
// Created by IoanB on 04.06.2022.
//

#include "Aplicatie.h"
#include "Sifonier.h"
#include "Camasa.h"
#include "Pantalon.h"
#include "Palarie.h"
#include "OutfitBuilder.h"
#include "ExceptieModa.h"

void Aplicatie::afisare_meniu() {
    std::cout<<"1. Vezi ce haine exista in sifonier\n";
    std::cout<<"2. Vezi ce perechi de pantofi exista in sifonier\n";
    std::cout<<"3. Cauta o haine\n";
    std::cout<<"4. Cauta o pereche de pantofi\n";
    std::cout<<"5. Creeaza un outfit!\n";
    std::cout<<"0. Iesire din program\n";
}

[[maybe_unused]] void Aplicatie::meniu(Sifonier Sifonierul_nostru) {
    int comanda;
    afisare_meniu();
    std::cin>>comanda;
    while(true) {
        switch (comanda) {
            case 1: {
                Sifonierul_nostru.afisare_haine();
                break;
            }
            case 2: {
                Sifonierul_nostru.afisare_pantofi();
                break;
            }
            case 3: {
                std::cout<<"Introdu materialul!\n";
                std::cin.get();
                std::string material;
                std::getline(std::cin,material);
                for(const auto& haina:Sifonierul_nostru.getHHaine()){
                    if(haina->getMaterial()==material)
                    {
                        std::cout<<"Ura, am gasit haina:";
                        std::cout<<*haina;
                    }
                }
                break;
            }
            case 4: {
                int gasit = 0;
                std::cout<<"Introdu materialul!\n";
                std::cin.get();
                std::string material;
                std::getline(std::cin,material);
                for(auto pantof:Sifonierul_nostru.getPPantofi()){
                    if(pantof.getMaterial()==material)
                    {
                        gasit++;
                        std::cout<<"Ura, am gasit perechea de pantofi:"<<pantof;
                    }
                }
                if(!gasit)
                    std::cout<<"Ne pare rau, dar aceasta pereche de pantofi nu este in sifonier. \n";
                break;
            }
            case 5: {

                OutfitBuilder outfitBuilder;

                std::cout<<"Ai ales sa faci un outfit. Introdu materialul camasii:\n";
                std::string material;
                std::cin.get();
                std::getline(std::cin,material);
                std:: vector <std::shared_ptr<Haina>> haineAlese;
                for(const auto& haina:Sifonierul_nostru.getHHaine()){
                    if(haina->getMaterial() == material && haina->getType()=="Camasa")
                    {
                        std::cout<<"Ura, am gasit camasa! Acum urmeaza pantalonii. Introdu materialul:\n";
                        outfitBuilder.camasa(std::dynamic_pointer_cast<Camasa>(haina));
                        break;
                    }
                }
                std::getline(std::cin,material);
                for(const auto& haina:Sifonierul_nostru.getHHaine()){
                    if(haina->getMaterial() == material && haina->getType()=="Pantalon")
                    {
                        std::cout<<"Ura, am gasit pantalonii! Acum urmeaza Palaria. Introdu materialul:\n";
                        outfitBuilder.pantalon(std::dynamic_pointer_cast<Pantalon>(haina));
                        break;
                    }
                }
                std::getline(std::cin,material);
                for(const auto& haina:Sifonierul_nostru.getHHaine()){
                    if(haina->getMaterial() == material && haina->getType()=="Palarie")
                    {
                        outfitBuilder.palarie(std::dynamic_pointer_cast<Palarie>(haina));
                        break;
                    }
                }
                try
                {
                    Outfit outfit = outfitBuilder.build();
                    std::cout<<"Super, outfitul tau este grozav, iata ce stiluri ai combinat:";
                    std::cout<<outfit;
                    outfituri.emplace_back(outfit);
                }catch(ExceptieModa &exceptieModa){
                    std::cout<<exceptieModa.what();
                }
                break;
            }
            case 0: {
                return;
            }
            default: {
                std::cout<<"Nu exista optiunea "<<comanda<<".\nProgramul se va inchide";
                return;
            }
        }
        std::cout<<"Apasa orice pentru a vedea din nou meniul\n";
        afisare_meniu();
        std::cin>>comanda;
    }
}

const std::vector<Outfit> &Aplicatie::getOutfituri() const {
    return outfituri;
}
