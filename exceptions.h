#include<stdexcept>



class MachineFailureException : public std::runtime_error{
    public:
    using runtime_error::runtime_error;
};


class MachineExplosionException : public std::runtime_error {
    public:
    using runtime_error::runtime_error;
};

class InvalidMachineIDException : public std::runtime_error{
    public:
    InvalidMachineIDException() : std::runtime_error("Invlaid Machine ID!"){};
};
