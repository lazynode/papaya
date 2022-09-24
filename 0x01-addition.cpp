#include "papaya.hpp"

using namespace assembly;

int main()
{
  std::cout << Section({
    PUSH(0),
    CALLDATALOAD(),
    PUSH(0x20),
    CALLDATALOAD(),
    ADD(),
    PUSH(0),
    MSTORE(),
    PUSH(0x20),
    PUSH(0),
    RETURN(),
  });
}
