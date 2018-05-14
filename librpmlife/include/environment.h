#include <iostream>
#include <vector>
#include "beeing.h"

class environment {
public:
    environment();
    ~environment();
    bool addBeeing();
    int countBeeings();
    std::vector<beeing *> beeingVector;
private:

};
