#include <iostream>

class beeing{
public:
    beeing();
    ~beeing();
    std::string getCode();
private:
    std::string code;
    int size;
    void populateRandom();
};
