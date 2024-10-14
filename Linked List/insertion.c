#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

// time complexity O(n)
void linkedListTraversal(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("Element:%d\n", ptr->data);
    ptr = ptr->next;
  }
};

struct Node *insertAtFirst(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  ptr->next = head;
  return ptr;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;

  struct Node *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;

  ptr->next = prevNode->next;
  prevNode->next = ptr;

  return head;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;

  struct Node *p = head;
  int i = 0;

  while (i != index - 1)
  {
    p = p->next;
    i++;
  }
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  // link first and second node
  head->data = 7;
  head->next = second;

  // link second and third node
  second->data = 11;
  second->next = third;

  // terminate
  third->data = 66;
  third->next = NULL;

  printf("Before insertion\n");
  linkedListTraversal(head);
  // head = insertAtFirst(head, 56);
  // head = insertAtIndex(head, 56, 3);
  // head = insertAtEnd(head, 56);
  head = insertAfterNode(head, second, 56);
  printf("\nAfter insertion\n");
  linkedListTraversal(head);
  return 0;
}