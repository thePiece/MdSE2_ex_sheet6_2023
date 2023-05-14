#include "machine.h"
#include "exceptions.h"

// Machine Base Class
/*
Machine::~Machine(){
    std::cout << "Machine destroyed!" << std::endl;
}
*/

void Machine::setFactory(Factory* f){
	this->factory = f;
}

// Machine A subclass
MachineA::~MachineA(){
    std::cout << "Machine A destroyed!" << std::endl;
}

void MachineA::tick(){

    // Make Product
    int dice = 1+ (rand() % 100);
    
    if(dice < 15){
        throw MachineFailureException("Machine A failure!");
    }

    dice = 1+ (rand() % 100);
    if(dice < 3){
        throw MachineExplosionException("Machine A exploded!");
    }

    factory->addProduct(new ProductA);
    std::cout << "Product A added to Storage!" << std::endl;
}

// Machine B subclass
MachineB::~MachineB(){
    std::cout << "Machine B destroyed!" << std::endl;
}

void MachineB::tick(){

    // Make Product
    int dice = 1+ (rand() % 100);
    
    if(dice < 15){
        throw MachineFailureException("Machine B failure!");
    }

    dice = 1+ (rand() % 100);
    if(dice < 3){
        throw MachineExplosionException("Machine B exploded!");
    }

    factory->addProduct(new ProductB);
    std::cout << "Product B added to Storage!" << std::endl;
}