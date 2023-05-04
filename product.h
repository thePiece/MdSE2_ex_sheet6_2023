#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product {
    private:

    protected:

    public:
    virtual int getType();

};


class Product1 : protected Product {
    private:
    int type = 1;
    protected:

    public:
    virtual int getType() override
    {return type;};
};


class Product1 : protected Product {
    private:
    int type = 2;
    protected:

    public:
    virtual int getType() override
    {return type;};
};

#endif /* PRODUCT_H_ */