#include <iostream>
#include <ctime>

#include "environment.h"

environment::environment(){
  std::srand(std::time(nullptr));
  std::cout<<"Environment"<<std::endl; 
}

environment::~environment(){
}

bool environment::addBeeing()
{
    beeing *b = new beeing();
    beeingVector.push_back(b);
    return true;
}

int environment::countBeeings()
{
    return beeingVector.size();
}
