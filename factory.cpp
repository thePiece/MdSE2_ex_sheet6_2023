#include "factory.h"

#include<unistd.h>

Factory::Factory(){
    // TODO
}

Factory::~Factory(){
    // ToDo
}

void Factory::run(unsigned i){
    unsigned c = 0;


    while(c < i || i == 0){
        if(i != 0){
            c++;
        }

        std::cout << "TEST: " << c << std::endl;

        sleep(2);
    }

    std::cout << "Produktion beendet!"<< std::endl;
}