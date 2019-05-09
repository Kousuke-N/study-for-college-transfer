#include "basic.h"

// ホーナの方法
// O(n)
double polynomial(double x, int n, int coefficient[n])
{
  double result = coefficient[n - 1];
  int i = 0;
  for (i = n - 2; i >= 0; i--)
  {
    printf("%f\n", result);
    result = result * x + coefficient[i];
  }
  return result;
}

int main()
{
  print_title("polynomial");
  int coefficient[3] = {1, 2, 3};
  printf("3x^2+2x+1(x=0.1)=%f\n", polynomial(0.1, 3, coefficient));

  return 0;
}