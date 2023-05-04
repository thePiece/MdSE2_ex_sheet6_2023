#include "factory.h"

#include<unistd.h> // For Sleep
#include <ctime> // For Srand
#include <memory>

Factory::Factory(){
    // TODO
}

Factory::~Factory(){
    // ToDo
}

void Factory::addProduct(std::shared_ptr<Product> p){
    Products.push_back(p);
}


void Factory::run(const unsigned i){
    unsigned c = 0;

    // Maschinen erstellen



    while(c < i || i == 0){
        if(i != 0){
            c++;
        }


            
        // Maschine 1 Produziert tick
        
        // Fehler auslassen mit Counter und If
        
        // Explosion kaputt und entfernen


        
        // Maschine 1 Produziert tick
        
        // Fehler auslassen mit Counter und If
        
        // Explosion kaputt und entfernen



        std::cout << "Durchlauf: " << c << std::endl;
        sleep(2);
    }

    std::cout << "Produktion beendet!"<< std::endl;
}