#ifndef FACTORY_H_
#define FACTORY_H_

#include<iostream>
#include<vector>

#include "product.h"

class Factory{
    private:

    protected:
    std::vector<std::shared_ptr<Product>> Products;


    public:
    Factory();
    ~Factory();

    void run(unsigned iterations); // Implementiert Zeitschleife (0 = unendlich) oder Zahl

    // unsigned addMachine(Machine* m);

    // Machine* getMachine(unsigned id);
    
    // void deleteMachine(unsigned id);

    void addProduct(std::shared_ptr<Product> p); // Übergibt ein Produk an die Factory

    // unsigned getProductACount(); // Gibt die Anzahl der im Lager vorhandenen Produkte zurück

    // unsigned getProductBCount();

    
};

#endif /* FACTORY_H_ */