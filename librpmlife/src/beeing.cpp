#include <cstdlib>
#include <iostream>
#include <cstring>
#include "beeing.h"

beeing::beeing(){
    code = "";
    size=200;
    populateRandom();
}

std::string beeing::getCode()
{
    return code;
}

void beeing::populateRandom(){
  // ASCII valid characters [32-126]
  int i = 0;
  int random = 0;

  for (i=0;i<size;i++){
        random = std::rand() % 92;
        code += (char)(random + 32);
  }
}
