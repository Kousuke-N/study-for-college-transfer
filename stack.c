#include "basic.h"

cell_t *init()
{
  return (cell_t *)malloc(sizeof(cell_t));
}

cell_t *push(cell_t *top, unsigned int data)
{
  if (top == NULL)
  {
    return NULL;
  }
  cell_t *new_top = init();

  new_top->data = data;
  new_top->next = top;
  return new_top;
}

cell_t *pop(cell_t *top)
{
  if (top->next == NULL)
  {
    printf("popできません\n");
    return top;
  }
  unsigned int data = top->data;
  top = top->next;
  printf("popしたデータ:%d\n", data);
  return top;
}

void print_stack(char *msg, cell_t *top)
{
  if (strcmp(msg, "") != 0)
  {
    printf("%s:", msg);
  }
  cell_t *p = top;
  printf("top-> ");
  while (p->next != NULL)
  {
    printf("%d-> ", p->data);
    p = p->next;
  }
  printf("buttom\n");
}

int main()
{
  cell_t *top = init();
  top->next = NULL;
  top = pop(top);
  print_stack("要素がない状態でのpop", top);
  top = push(top, 0);
  top = push(top, 5);
  print_stack("pop", top);
  top = pop(top);
  print_stack("pop", top);
}