#include <iostream>
#include "position.h"

class beeing{
public:
    beeing();
    ~beeing();
    std::string getCode();
    position *getPosition();
private:
    std::string code;
    int size;
    void populateRandom();
    position *beeingPosition;
    void setPosition(position *p);
};
