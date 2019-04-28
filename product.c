#include "basic.h"

// 自分で考えたもの
int product1(int a, int b)
{
  int product = 0;
  while (b-- > 0)
  {
    product += a;
  }
  return product;
}
int main(int argc, char const *argv[])
{
  print_title("product1");
  printf("5x7=%d\n", product1(5, 7));
  printf("12x9=%d\n", product1(12, 9));
  return 0;
}
