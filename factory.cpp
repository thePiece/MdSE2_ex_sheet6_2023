
#include "factory.h"

#include <unistd.h>

Factory::Factory(){};

Factory::~Factory(){};


unsigned Factory::addMachine(Machine* m){
    unsigned id = machineID++;
    machines.insert({id, std::shared_ptr<Machine>(m)});
    m->setFactory(this);
    return id;
}

std::shared_ptr<Machine> Factory::getMachine(unsigned id){
    std::shared_ptr<Machine> ma;
    for (auto m : machines){
        if(m.first == id){
            ma = m.second;
            break;
        }
    }
    return ma;
}

void Factory::deleteMachine(unsigned id){

}


void Factory::addProduct(Product* p){
    
}

unsigned Factory::getProductACount(){
    return 0;
}

unsigned Factory::getProductBCount(){
    return 0;
}

void Factory::run(unsigned it){
    unsigned c = 0;
    while(c < it || it == 0){
        if (it != 0){
            c++;
        }
        std::cout << "Durchlauf: " << c << std::endl;

        // Für Machine in MAP
        for (auto machine : machines){
            // std::cout << machine.first << std::endl;
            // std::shared_ptr<Machine> m = machine.second;
            machine.second->tick();
        }

        sleep(3);
    }
}

// ToDo
/*

Random zeiten + erstellen der Priducte und Speichern der Producte

Ausfall Try Catch

Mehr Ausgaben

*/