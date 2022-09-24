#include "papaya.hpp"

using namespace basic;
using namespace basic::extension;

int main()
{
  std::cout << Contract(
    {},
    {
      Drop(call(gas(), caller(), callvalue() / 2, 0, 0, 0, 0)),
    }
  );
}