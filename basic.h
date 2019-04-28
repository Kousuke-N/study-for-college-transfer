#include <stdio.h>

void swap(int *, int *);
void print_title(char *);
int mstrlen(char *);

void swap(int *a, int *b)
{
  int *temp = a;
  a = b;
  b = temp;
}

void print_title(char *title)
{
  int total_length = 40;
  int title_length = mstrlen(title);
  int hyphen_num = total_length - title_length;

  printf("--- %s ", title);
  while (hyphen_num-- > 0)
  {
    putchar('-');
  }
  putchar('\n');
}

int mstrlen(char *str)
{
  char c = *(str);
  int num = 0;
  while (c != '\0')
  {
    num++;
    c = *(str + num);
  }
  return num;
}
