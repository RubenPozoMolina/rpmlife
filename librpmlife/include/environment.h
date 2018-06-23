#include <iostream>
#include <vector>
#include "beeing.h"

#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H


class environment {
public:
    environment();
    ~environment();
    bool addBeeing();
    int countBeeings();
    std::vector<beeing *> beeingVector;
private:

};

#endif // ENVIRONMENT_H
