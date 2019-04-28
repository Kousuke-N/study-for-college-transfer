#include "basic.h"

// 自分で考えたもの
// product1(n, m)の計算量はO(m)
int product1(int a, int b)
{
  int product = 0;
  while (b-- > 0)
  {
    product += a;
  }
  return product;
}

// ロシア農民法を自分で考えて
// 計算量はパッと調べても出てこなかった
// けど多分↓↓↓
// product2(a, b)の計算量はO(log(b))
int product2(int a, int b)
{
  int product = 0;
  int i;
  for (i = 0; b > 0; b /= 2, a *= 2)
  {
    if (b % 2 == 1)
    {
      product += a;
    }
  }
  return product;
}

// ロシア農民法教科書版
int product3(int a, int b, int product)
{
  if (b == 0)
  {
    return product;
  }
  else if (b % 2 == 1)
  {
    return product3(a * 2, b / 2, product + a);
  }
  else
  {
    return product3(a * 2, b / 2, product);
  }
}

int main(int argc, char const *argv[])
{
  print_title("product1");
  printf("5x7=%d\n", product1(5, 7));
  printf("12x9=%d\n", product1(12, 9));
  printf("12x0=%d\n", product1(12, 0));

  print_title("product2");
  printf("5x7=%d\n", product2(5, 7));
  printf("12x9=%d\n", product2(12, 9));
  printf("12x0=%d\n", product2(12, 0));

  print_title("product3");
  printf("5x7=%d\n", product3(5, 7, 0));
  printf("12x9=%d\n", product3(12, 9, 0));
  printf("12x0=%d\n", product3(12, 0, 0));
  return 0;
}
