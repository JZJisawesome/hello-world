#include <iostream>
#include <cstdint>

constexpr std::uint8_t changes {2};///<Number of changes to this file

/** \brief main function for helloworld.cpp
 *
 * \author JZJisawesome
 * \date 2018
*/
int main()
{
  std::cout << "Hello World! Changes so far of this file: " << static_cast<int> (changes);
  std::cout << std::endl;
  
  return 0;
}
