#include "basic.h"

void insert(cell_t *p, unsigned int data)
{
  cell_t *next = init_cell();
  next->data = data;
  next->next = p->next;
  p->next = next;
}

void print_list(cell_t *head)
{
  cell_t *p = head->next;
  printf("head-> ");
  while (p != NULL)
  {
    printf("%d-> ", p->data);
    p = p->next;
  }
  printf("•\n");
}

cell_t *search(cell_t *head, unsigned int data)
{
  cell_t *p = head->next;
  while (p != NULL)
  {
    if (p->data == data)
    {
      return p;
    }
    p = p->next;
  }
  return NULL;
}

int delete (cell_t *head, unsigned int data)
{
  cell_t *p = head;

  while (p->next != NULL)
  {
    if (p->next->data == data)
    {
      p->next = p->next->next;
      return 0;
    }
    p = p->next;
  }
  return -1;
}

int main()
{
  print_title("init_cell");
  cell_t *head = init_cell();
  head->next = NULL;
  print_title("insert");
  insert(head, 0);
  insert(head, 5);
  insert(head, 10);
  insert(head, 15);
  insert(head, 20);
  print_list(head);
  print_title("search");
  cell_t *a = search(head, 10);
  cell_t *b = search(head, 12);
  printf("10:%d\n", a != NULL ? a->data : -1);
  printf("12:%d\n", b != NULL ? b->data : -1);
  print_title("delete");
  printf("リストがない要素のdelete():%d\n", delete (head, 1));
  insert(head, 5);
  insert(head, 10);
  printf("リストにある要素のdelete():%d\n", delete (head, 5));
}
