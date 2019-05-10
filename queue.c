#include "basic.h"

typedef struct queue
{
  cell_t *head;
  cell_t *tail;
} queue_t;

queue_t *init_queue()
{
  queue_t *queue = (queue_t *)malloc(sizeof(queue_t *));
  queue->head = init_cell();
  queue->tail = queue->head;
  return queue;
}

void enqueue(queue_t *queue, unsigned int data)
{
  cell_t *new_tail = init_cell();
  new_tail->data = data;
  new_tail->next = NULL;
  queue->tail->next = new_tail;
  queue->tail = new_tail;
}

int dequeue(queue_t *queue)
{
  if (queue->tail == queue->head)
  {
    return -1;
  }
  unsigned int data = queue->head->next->data;
  queue->head = queue->head->next;
  return data;
}

void print_queue(char *msg, queue_t *queue)
{
  if (strcmp(msg, "") != 0)
  {
    printf("%s:", msg);
  }
  printf("head -> ");
  if (queue->head->next != NULL)
  {
    cell_t *p = queue->head->next;
    while (p != NULL)
    {
      printf("%d -> ", p->data);
      p = p->next;
    }
  }
  printf("tail\n");
}

int main()
{
  queue_t *queue = init_queue();
  print_queue("初期化時のqueue", queue);
  enqueue(queue, 5);
  print_queue("この時のqueue", queue);
  printf("dequeueから得た値:%d\n", dequeue(queue));
  print_queue("この時のqueue", queue);
  printf("要素がない状態でのdequeue:%d\n", dequeue(queue));
}