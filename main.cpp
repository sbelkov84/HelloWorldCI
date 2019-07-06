#include "lib.h"
#include "helloworld.h"

#include <iostream>

int main (int, char**)
{
  std::cout << "Version: " << version() << " " << HelloWorld() << std::endl;
  return 0;
}
