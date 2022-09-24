#include "papaya.hpp"

using namespace basic;
using namespace basic::extension;

int main()
{
  std::cout << SCOPE(
    {"prod", 1},
    {
      WHILESCOPE(
        {"num", calldata(0)},
        var("num"),
        {
          Set("prod", var("prod") * var("num")),
          StrSUB(1),
        }
      ),
      RetVal(var("prod")),
    }
  );
}