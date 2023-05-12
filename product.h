#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product{
    private:

    protected:

    public:
    virtual int getType() = 0;

};

class ProductA : public Product {
    private:

    protected:

    public:
    virtual int getType() override;

};


class ProductB : public Product{
    private:

    protected:

    public:
    virtual int getType() override;
};

#endif /*PRODUCT_H_*/