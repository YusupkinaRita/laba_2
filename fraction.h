#include <iostream>
#include <cstdint>

class fraction{
private:
void reduce();
int32_t _num;
    uint32_t _denom;
public:

    fraction(double realFract);
    





    friend std::ostream& operator<<(std::ostream& os, const fraction& tmp){
        os << tmp._num << "/" << tmp._denom << std::endl;
        return os;
    }

};