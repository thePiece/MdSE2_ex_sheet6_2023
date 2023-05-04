#ifndef MACHINE_H_
#define MACHINE_H_

class Factory;
class Machine{
    private:

    protected:
    Factory* factory = nullptr;

    public:
    virtual void tick();// Simuliert Produkte produzieren
    
    void setFactory(Factory* f){
        this->factory = f;
    };
};

class MachineA : protected Machine{
    private:

    protected:

    public:
    MachineA();
    ~MachineA();

    virtual void tick() override;

};


class MachineB : protected Machine {
    private:

    protected:

    public:
    MachineB();
    ~MachineB();

    virtual void tick() override;
};

#endif /* MACHINE_H_ */