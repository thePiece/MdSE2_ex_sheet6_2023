#ifndef MACHINE_H_
#define MACHINE_H_

#include "factory.h"
#include<iostream>

class Factory;

class Machine {
    private:

    protected:
    Factory* factory = nullptr;
    int susbend_counter = 0;

    public:
    virtual ~Machine(){};

    /*Getter Setter*/
    int getSusbend_Counter(){
        return susbend_counter;
    }

    void setSusbend_Counter(int nc){
        susbend_counter = nc;
    }

    virtual void tick() = 0;
    void setFactory(Factory* f);

};


class MachineA : public Machine{
    private:

    protected:

    public:
    virtual ~MachineA();
    virtual void tick() override;

};

class MachineB : public Machine{
    private:

    protected:

    public:
    virtual ~MachineB();
    virtual void tick() override;

};

#endif /*MACHINE_H_*/