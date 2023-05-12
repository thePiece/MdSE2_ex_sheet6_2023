#ifndef MACHINE_H_
#define MACHINE_H_

#include "factory.h"
#include<iostream>

class Factory;

class Machine {
    private:

    protected:
    Factory* factory = nullptr;

    public:

    virtual void tick() = 0;

    void setFactory(Factory* f);

};


class MachineA : public Machine{
    private:

    protected:

    public:
    ~MachineA();
    virtual void tick() override;

};

class MachineB : public Machine{
    private:

    protected:

    public:
    
    ~MachineB();

    virtual void tick() override;

};


#endif /*MACHINE_H_*/