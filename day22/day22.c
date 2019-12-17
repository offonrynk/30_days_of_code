#include <stdio.h>
#include <stdlib.h>
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
  free(node);
  return node;
}

//---------------------------------------------------------------
/*!
 * getHeight function
 */
int getHeight(Node *root)
{
  if (root == NULL)
    return -1;

  int leftKey = getHeight(root->left);
  int rightKey = getHeight(root->right);
  if (leftKey > rightKey)
    return (1 + leftKey);
  else
    return (1 + rightKey);
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
  int height = getHeight(root);
  printf("%d", height);
  return 0;
}
