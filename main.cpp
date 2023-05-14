#include<iostream>
#include <ctime>
#include <memory>
#include "machine.h"
#include "factory.h"

class MachineA;
class MachineB;

int main(){
    std::srand(std::time(NULL));

    Factory factory;

    factory.addMachine(new MachineA());
    factory.addMachine(new MachineB());

    factory.run(0);

    return 0;
}