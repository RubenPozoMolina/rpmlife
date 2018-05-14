#include <iostream>
#include "environment.h"

environment::environment(){
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
