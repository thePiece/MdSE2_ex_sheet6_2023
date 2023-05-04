#include<iostream>
#include <ctime>
#include"factory.h"


int main(){
    std::srand(std::time(NULL));

    Factory f;
    f.run(0);

    return 0;
}