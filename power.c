#include "basic.h"

// O(log(n))
double power(double x, int n)
{
  if (n == 0)
  {
    return 1;
  }
  if (n % 2 == 0)
  {
    double temp = power(x * x, n / 2);
    return temp;
  }
  else
  {
    double temp = power(x * x, (n - 1) / 2);
    return x * temp;
  }
}

int main()
{
  print_title("power");
  printf("3³=%f\n", power(3, 3));
  printf("3.14¹²=%f\n", power(3.14, 12));
  printf("3.14¹³=%f\n", power(3.14, 13));
}