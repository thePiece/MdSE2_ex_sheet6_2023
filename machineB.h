#ifndef MACHINEB_H_
#define MACHINEB_H_

#include"machine.h"

class MachineB : protected Machine {
    private:

    protected:

    public:
    MachineB();
    ~MachineB();

    virtual void tick() override;
};

#endif /* MACHINEB_H_ */