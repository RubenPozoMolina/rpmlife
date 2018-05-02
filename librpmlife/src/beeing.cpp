#include <cstdlib>
#include <iostream>
#include <ctime>
#include "beeing.h"

beeing::beeing(){
  populateRandom();
}

void beeing::populateRandom(){
  int i = 0;
  std::srand(std::time(nullptr)); // use current time as seed for random generator
  for (i=0;i<sizeof(code);i++){
    code[i]=std::rand();
  }
}
