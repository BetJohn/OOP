#include <iostream>
#include "Haina.h"
#include "Pantof.h"
#include "Sifonier.h"
#include <vector>
#include <fstream>
#include "Camasa.h"
#include "cmake-build-debug/Pantalon.h"

//#include <cstdlib>
void afisare_meniu(){
    std::cout<<"1. Vezi ce haine exista in sifonier\n";
    std::cout<<"2. Vezi ce perechi de pantofi exista in sifonier\n";
    std::cout<<"3. Cauta o haine\n";
    std::cout<<"4. Cauta o pereche de pantofi\n";
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
                std::cout<<"Comming soon...Stay tuned\n";
                break;
            }
            case 4: {
                std::cout<<"Comming soon...\n";
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
    std::string material;
    fin>>nr_haine>>nr_pantofi;
    std:: vector <Haina> haine(nr_haine);
    std:: vector <Pantof> pantofi(nr_pantofi);
    for(int i=0;i<nr_haine;i++){
        fin>>pret;
        fin.get();
        std::getline(fin, material);
        haine[i] = Haina{pret,material};
    }
    for(int i=0;i<nr_pantofi;i++) {
        fin >> pret;
        fin.get();
        std::getline(fin, material);
        fin >> marime;
        pantofi[i] = Pantof(pret, material, marime);
    }
    Sifonier Sifonierul_nostru = Sifonier{nr_pantofi,nr_haine,pantofi,haine};
    Sifonierul_nostru.afisare_haine();
    Sifonierul_nostru.afisare_pantofi();
    meniu(Sifonierul_nostru);
    std::cout<<"\n\n\n\n";
    Haina aux = Haina(50,"DolceGabana");
    Camasa camasa = Camasa(aux.getPret(),aux.getMaterial(),true,"Stil","Alb");
    camasa.afisare();
    Pantalon pantalon = Pantalon(10,"Casmir",34,true,"Vintage","Crem");
    std::cout<<pantalon;
    Pantalon pantalon1 = pantalon;
    std::cout<<pantalon1;
    return 0;
}