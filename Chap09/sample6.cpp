#include <iostream>

int main()
{
  int test[5] = {80, 60, 55, 22, 75};

  std::cout << "test[0] = " << test[0] << '\n';
  std::cout << "&test[0] = " << &test[0] << '\n';
  std::cout << "test = " << test << '\n';
  std::cout << "test+1 = " << test+1 << '\n';
  std::cout << "*(test+1) = " << *(test+1) << '\n';

  return 0;
}
