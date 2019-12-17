#include <cstddef>
#include <iostream>

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int d)
  {
    data = d;
    left = NULL;
    right = NULL;
  }
};

class Solution {
public:
  Node *insert(Node *root, int data)
  {
    if (root == NULL) {
      return new Node(data);
    }
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

      return root;
    }
  }

  //---------------------------------------------------------------
  /*!
   * getHeight function
   */
  int getHeight(Node *root)
  {
    if (root == nullptr)
      return -1;

    int leftKey = getHeight(root->left);
    int rightKey = getHeight(root->right);
    if (leftKey > rightKey)
      return (1 + leftKey);
    else
      return (1 + rightKey);
  }
  //---------------------------------------------------------------
};

int main()
{
  Solution myTree;
  Node *root = NULL;
  int t;
  int data;

  std::cin >> t;

  while (t-- > 0) {
    std::cin >> data;
    root = myTree.insert(root, data);
  }
  int height = myTree.getHeight(root);
  std::cout << height << std::endl;

  return 0;
}
