
#include "factory.h"
#include "exceptions.h"
#include <unistd.h>

Factory::Factory(){};

Factory::~Factory(){};


unsigned Factory::addMachine(Machine* m){
    unsigned id = machineID++;
    machines.insert({id, std::shared_ptr<Machine>(m)});
    m->setFactory(this);
    return id;
}

Machine* Factory::getMachine(unsigned id){
    try
    {
        return machines.at(id).get();
    }
    catch(const std::out_of_range& e)
    {
        throw InvalidMachineIDException();
    }
}

void Factory::deleteMachine(unsigned id){
    machines.erase(id);
}


void Factory::addProduct(Product* p){
    products.push_back(p);
}

unsigned Factory::getProductACount(){
    int count = 0;
    for(auto p : products){
        if (p->getType() == 1){
            count++;
        }
    }
    return count;
}

unsigned Factory::getProductBCount(){
    int count = 0;
    for(auto p : products){
        if (p->getType() == 2){
            count++;
        }
    }
    
    return count;
}

void Factory::run(unsigned it){
    unsigned c = 0;
    int round = 0;
    unsigned mid = 0;
    while(c < it || it == 0){
        if (it != 0){
            c++;
        }
        round++;
        std::cout << "Round: " << round << std::endl;
        
        
        if(machines.empty()){
            std::cout << "All Machines are destroyed!"<< std::endl;
            break;
        }
        
        try{
            for(auto m : machines){
                try{
                    mid = m.first;
                    if(m.second->getSusbend_Counter() == 0){
                        m.second->tick();
                    }else{
                        m.second->setSusbend_Counter(m.second->getSusbend_Counter()-1);
                        std::cout << "Machine susbend: " << m.second->getSusbend_Counter()+1 << std::endl;
                    }
                }
                catch(const MachineFailureException& e){
                    m.second->setSusbend_Counter(3);
                    std::cerr << e.what() << '\n';
                }
            }
        }catch(const MachineExplosionException& e){
            std::cout << "Caught exception: " << e.what() << std::endl;
            deleteMachine(mid);
        }
        
        std::cout << "Produkte A: " << getProductACount() << std::endl;
        std::cout << "Produkte B: " << getProductBCount() << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        sleep(1);
    }
}

// ToDo

/*

Warscheinlichkeiten von Maschinen prüfen

Mehr Ausgaben -> Rafactoring für Transparenz

*/