#include "machine.h"


// Machine Base Class

void Machine::setFactory(Factory* f){
	this->factory = f;
}

// Machine A subclass

MachineA::~MachineA(){
    std::cout << "MachineA destroyed!" << std::endl;
}

void MachineA::tick(){
     std::cout << "asdasdadsadsasd AAAAA" << std::endl;
}

// Machine B subclass

void MachineB::tick(){
    // Make Product
    std::cout << "asdasdadsadsasd BBBB" << std::endl;
}

MachineB::~MachineB(){
    std::cout << "MachineA destroyed!" << std::endl;
}
