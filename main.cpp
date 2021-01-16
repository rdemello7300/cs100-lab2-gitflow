#include "c-echo.h"
#include <iostream>
#include <string>

int main(int argv, char** argc )
{
  std::cout << "Count of output: " << count(echo(argv,argc)) << std::endl;
}
