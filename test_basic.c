#include "basic.h"

int main()
{
  print_title("print_title's test");
  print_title("p");
  print_title("hogehogehogehogehogehoge");
  print_title("mstrlen(char *str)");
  printf("mstrlen(\"%s\"): %d\n", "", mstrlen(""));
  printf("mstrlen(\"%s\"): %d\n", "1234567890", mstrlen("1234567890"));
  return 0;
}