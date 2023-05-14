#ifndef FACTORY_H_
#define FACTORY_H_

#include <memory>
#include <map>
#include <vector>

#include "machine.h"
#include "product.h"

class Machine;
class Factory{
    private:
    std::map<unsigned, std::shared_ptr<Machine>> machines;
    std::vector<Product*> products;
    unsigned machineID = 0;

    protected:

    public:
    Factory();
    ~Factory();

    unsigned addMachine(Machine* m);
    Machine* getMachine(unsigned id);
    void deleteMachine(unsigned id);


    void addProduct(Product* p);
    unsigned getProductACount();
    unsigned getProductBCount();

    void run(unsigned iterations);
};


#endif /*FACTORY_H_*/