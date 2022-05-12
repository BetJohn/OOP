#include <iostream>
#include "Haina.h"
#include "Pantof.h"
#include "Sifonier.h"
#include "Pantalon.h"
#include "Camasa.h"
#include <vector>
#include <fstream>
#include <memory>

void afisare_meniu(){
    std::cout<<"1. Vezi ce haine exista in sifonier\n";
    std::cout<<"2. Vezi ce perechi de pantofi exista in sifonier\n";
    std::cout<<"3. Cauta o haine\n";
    std::cout<<"4. Cauta o pereche de pantofi\n";
    std::cout<<"5. Inscriete chiar acum!\n";
    std::cout<<"6. Verifica un outfit!\n";
    std::cout<<"0. Iesire din program\n";
}
void meniu(Sifonier Sifonierul_nostru){
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
                for(auto haina:Sifonierul_nostru.getHHaine()){
                    if(!haina->getMaterial().compare(material))
                    {
                        std::cout<<"Ura, am gasit haina:";
                        haina->afisare();
                    }
                }
                break;
            }
            case 4: {
                std::cout<<"Introdu materialul!\n";
                std::cin.get();
                std::string material;
                std::getline(std::cin,material);
                for(auto pantof:Sifonierul_nostru.getPPantofi()){
                    if(!pantof.getMaterial().compare(material))
                    {
                        std::cout<<"Ura, am gasit perechea de pantofi:"<<pantof;
                    }
                }
                break;
            }
            case 5: {
                std::string nume;
                std::cout<<"Introdu numele:\n";
                std::cin.get();
                std::getline(std::cin, nume);
                if(!nume.empty())
                {
                    std::cout<<"Bun, ID-ul tau este 8080! Haide sa ti gasim outfitul perfect\n";
                    std::cout<<"Poti cauta orice haina in sifonierul nostru!\n";
                    break;
                }
                else
                {
                    throw ("Eroare! Numele nu a fost adaugat corect!\n");
                    break;
                }
            }
            case 6:{
                bool gasit_pants = true;
                bool gasit_camasa = true;
                Camasa camasa1 = Camasa();
                Pantalon pantalon1 = Pantalon();
                std::cout<<"Pentru inceput alege o pereche de pantaloni dupa material:";
                std::string material;
                std::cin.get();
                std::getline(std::cin,material);
                while(gasit_pants){
                    for(auto haina:Sifonierul_nostru.getHHaine()){
                        if(!haina->getMaterial().compare(material))
                        {
                            std::cout<<"Ura, am gasit perechea de pantaloni:\n";
                            haina->afisare();
                            gasit_pants = false;
                            auto pantalon = haina;
                            pantalon1.setStil(pantalon->getStil());
                            break;
                        }
                    }
                    if(gasit_pants)
                    {
                        std::cout<<"Mai incearca o data!\nMaterial:";
                        std::getline(std::cin,material);
                    }
                }
                std::cout<<"Perfect, acum sa gasim si camasa!\nIntrodu materialul:";
                std::getline(std::cin,material);
                while(gasit_camasa) {
                    for (auto haina: Sifonierul_nostru.getHHaine()) {
                        if (!haina->getMaterial().compare(material)){
                            std::cout << "Ura, am gasit camasa:\n";
                            haina->afisare();
                            gasit_camasa = false;
                            auto camasa = haina;
                            camasa1.setStil(camasa->getStil());
                            break;
                        }
                    }
                    if(gasit_camasa)
                    {
                        std::cout<<"Mai incearca o data!\nMaterial:";
                        std::getline(std::cin,material);
                    }
                }
                if(pantalon1.matches(camasa1))
                    std::cout<<"Da, "<<pantalon1.getStil()<<" se potriveste cu "<<camasa1.getStil()<<"! Distractie placuta!\n";
                else
                    std::cout<<"Din pacate, "<<pantalon1.getStil()<<"nu se potriveste cu "<<camasa1.getStil()<<"... Iti sugerez sa te uiti din nou prin garderoba!\n";
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
            if(tipHaina.compare("Haina")==0){
                fin>>pret;
                fin.get();
                std::getline(fin, material);
                std::getline(fin, stil);
                auto haina = std::make_shared<Haina>(pret,material,stil);
                haine.emplace_back(haina);
            }
            else if(tipHaina.compare("Pantalon")==0){
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
    Sifonier Sifonierul_nostru = Sifonier{nr_pantofi,nr_haine,haine,pantofi};
    meniu(Sifonierul_nostru);
    return 0;
}