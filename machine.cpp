#include "machine.h"

#include<iostream>
#include <ctime>


void MachineA::tick(){
    

    if(((rand()%100)+1) > 15){
        if(((rand()%100)+1) > 2){
            setFactory()


            // factory->addProduct();
        }else{
            // throw Explosion exception
        }
    }else{
        // throw exception failure
    }
    
    // (rand()%100)+1 << std::endl;
}


void MachineB::tick(){
    // std::cout << "Testrandom: " << (rand()%100)+1 << std::endl;
}