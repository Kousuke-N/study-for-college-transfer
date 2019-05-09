#include "basic.h"

int main()
{
  print_title("print_title's test");
  print_title("p");
  print_title("hogehogehogehogehogehoge");

  print_title("mstrlen(char *str)");
  printf("mstrlen(\"%s\"): %d\n", "", mstrlen(""));
  printf("mstrlen(\"%s\"): %d\n", "1234567890", mstrlen("1234567890"));

  print_title("print_matrix()");
  int m[3][2] = {
      {1, 2},
      {3, 4},
      {5, 6}};
  print_matrix(3, 2, m);
  int n[3][3] = {
      {1, 2, 3},
      {4, 53345, 6},
      {7, 8, 9}};

  print_matrix(3, 3, n);
  return 0;
}