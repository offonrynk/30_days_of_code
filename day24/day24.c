#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

//---------------------------------------------------------------
/*!
 * function rto remove duplicate nodes
 * @return newhead position of the list
 */
Node *removeDuplicates(Node *head)
{
  Node *node = head;
  if (head == NULL) {
    head = node;
  }
  else {
    while (node->next != NULL) {
      if (node->data == node->next->data) {
        node->next = node->next->next;
      }
      else {
        node = node->next;
      }
    }
  }

  return head;
}
//---------------------------------------------------------------

Node *insert(Node *head, int data)
{
  Node *p = (Node *)malloc(sizeof(Node));
  p->data = data;
  p->next = NULL;

  if (head == NULL) {
    head = p;
  }
  else if (head->next == NULL) {
    head->next = p;
  }
  else {
    Node *start = head;
    while (start->next != NULL)
      start = start->next;

    start->next = p;
  }
  return head;
}
void display(Node *head)
{
  Node *start = head;
  while (start) {
    printf("%d ", start->data);
    start = start->next;
  }
}
int main()
{
  int T, data;
  scanf("%d", &T);
  Node *head = NULL;
  while (T-- > 0) {
    scanf("%d", &data);
    head = insert(head, data);
  }
  head = removeDuplicates(head);
  display(head);
}
