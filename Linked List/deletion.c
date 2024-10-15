#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *deleteAtFirst(struct Node *head)
{
  struct Node *ptr = head;
  head = head->next;
  free(ptr);
  return head;
}

struct Node *deleteInBetween(struct Node *head, int index)
{
  struct Node *ptr = head;
  struct Node *p;

  int i = 0;
  while (i != index - 1)
  {
    p = p->next;
    i++;
  }

  ptr = p->next;
  p->next = ptr->next;
  free(ptr);
  return head;
}

struct Node *deleteAtEnd(struct Node *head)
{
  struct Node *ptr;
  struct Node *p;

  p = head;
  ptr = head->next;
  while (ptr->next != NULL)
  {
    p = p->next;
    ptr = ptr->next;
  }
  p->next = NULL;
  free(ptr);
  return head;
}

struct Node *deleteAtValue(struct Node *head, int value)
{
  struct Node *ptr;
  struct Node *p;

  p = head->next;
  ptr = head;

  while (p->data != value && p->next != NULL)
  {
    ptr = ptr->next;
    p = p->next;
  }

  if (p->data == value)
  {
    ptr->next = p->next;
    free(p);
  }
  return head;
}

// time complexity O(n)
void linkedListTraversal(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("Element:%d\n", ptr->data);
    ptr = ptr->next;
  }
};

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // link first and second node
  head->data = 7;
  head->next = second;

  // link second and third node
  second->data = 11;
  second->next = third;

  third->data = 66;
  third->next = fourth;

  fourth->data = 16;
  fourth->next = NULL;

  printf("Before deletion\n");
  linkedListTraversal(head);
  // head = deleteAtFirst(head);
  // head = deleteInBetween(head, 2);
  // head = deleteAtEnd(head);
  head = deleteAtValue(head, 67);

  printf("\nAfter deletion\n");
  linkedListTraversal(head);
  return 0;
}