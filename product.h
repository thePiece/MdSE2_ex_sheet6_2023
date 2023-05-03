#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product {
    private:

    protected:

    public:
    virtual int getType() = 0;

};


class Product1 : protected Product {
    private:

    protected:

    public:
    virtual int getType() override
    {return 1;};
};


class Product1 : protected Product {
    private:

    protected:

    public:
    virtual int getType() override
    {return 2;};
};

#endif /* PRODUCT_H_ */