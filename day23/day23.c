#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  struct Node *left;
  struct Node *right;
  int data;
} Node;
Node *newNode(int data)
{
  Node *node = (Node *)malloc(sizeof(Node));
  node->left = node->right = NULL;
  node->data = data;
  return node;
}

//---------------------------------------------------------------
/*!
 * Struct to help use lists for Queue implementation
 */
struct sQueuedNode {
  Node *s_newNode;
  struct sQueuedNode *s_next;
};

struct sQueuedNode *front, *rear;

/*!
 * enQueue function
 * takes the root node as input
 */
void enQueue(Node *root)
{
  if (root == NULL)
    return;

  struct sQueuedNode *newNode =
      (struct sQueuedNode *)calloc(1, sizeof(struct sQueuedNode));
  newNode->s_newNode = root;
  newNode->s_next = NULL;

  if (rear == NULL) {
    front = rear = newNode;
  }
  else {
    rear->s_next = newNode;
    rear = newNode;
  }
}

/*!
 * deQueue function
 * @return new Node
 */
struct Node *deQueue()
{
  if (front == NULL)
    return NULL;

  struct sQueuedNode *tmp = front;
  struct Node *newNode = front->s_newNode;

  front = front->s_next;
  if (!front)
    rear = NULL;

  free(tmp);

  return newNode;
}

/*!
 * levelOrder function
 * Prints the data value of each node in the tree's BST traversal
 */
void levelOrder(Node *root)
{
  if (root == NULL)
    return;

  enQueue(root->left);
  enQueue(root->right);

  printf("%d ", root->data);

  levelOrder(deQueue());
}
//---------------------------------------------------------------

Node *insert(Node *root, int data)
{
  if (root == NULL)
    return newNode(data);
  else {
    Node *cur;
    if (data <= root->data) {
      cur = insert(root->left, data);
      root->left = cur;
    }
    else {
      cur = insert(root->right, data);
      root->right = cur;
    }
  }
  return root;
}

int main()
{
  Node *root = NULL;
  int T, data;
  scanf("%d", &T);
  while (T-- > 0) {
    scanf("%d", &data);
    root = insert(root, data);
  }
  levelOrder(root);
  return 0;
}
