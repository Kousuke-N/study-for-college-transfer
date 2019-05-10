#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell
{
  unsigned int data;
  struct cell *next;
} cell_t;

cell_t *init_cell();
void swap(int *, int *);
void print_title(char *);
int mstrlen(char *);
void print_matrix(int m, int n, int a[m][n]);

cell_t *init_cell()
{
  cell_t *cell = (cell_t *)malloc(sizeof(cell_t));
  cell->next = NULL;
  cell->data = 0;
  return cell;
}

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

void print_matrix(int m, int n, int a[m][n])
{
  int x, y;
  for (x = 0; x <= 7 * n; x++)
  {
    if (x == 0)
      printf("┏");
    else
      printf("-");
  }
  printf("┓\n");
  for (y = 0; y < m; y++)
  {
    printf("┃");
    for (x = 0; x < n; x++)
    {
      printf("%6d,", a[y][x]);
    }
    printf("┃\n");
  }
  for (x = 0; x <= 7 * n; x++)
  {
    if (x == 0)
      printf("┗");
    else
      printf("-");
  }
  printf("┛\n");
}