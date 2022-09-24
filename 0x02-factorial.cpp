#include "papaya.hpp"

using namespace assembly;

int main()
{
  std::cout << Section({
    PUSH("0x01"),
    PUSH("0x00"),
    CALLDATALOAD(),
    Tag("begin"),
    DUP1(),
    JumpIf("loop"),
    POP(),
    PUSH(0),
    MSTORE(),
    PUSH(0x20),
    PUSH("0x00"),
    RETURN(),
    Tag("loop"),
    DUP1(),
    SWAP2(),
    MUL(),
    SWAP1(),
    PUSH("0x01"),
    SWAP1(),
    SUB(),
    JumpTo("begin"),
  });
}