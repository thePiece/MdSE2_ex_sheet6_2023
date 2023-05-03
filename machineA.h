#ifndef MACHINE1_H_
#define MACHINE1_H_

#include "machine.h"

class MachineA : protected Machine{
    private:

    protected:

    public:
    MachineA();
    ~MachineA();

    virtual void tick() override;

};

#endif /* MACHINE1_H_ */