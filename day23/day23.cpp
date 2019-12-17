#include <iostream>
#include <queue>

class Node {
public:
  int data;
  Node *left, *right;
  Node(int d)
  {
    data = d;
    left = right = NULL;
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
   * levelOrder function
   * prints queue to console
   */
  void levelOrder(Node *root)
  {
    if (root == nullptr)
      return;

    std::queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
      Node *node = q.front();
      std::cout << node->data << " ";
      if (node->left != nullptr)
        q.push(node->left);

      if (node->right != nullptr)
        q.push(node->right);

      q.pop();
    }
  }
  //---------------------------------------------------------------

}; // End of Solution

int main()
{
  Solution myTree;
  Node *root = NULL;
  int T, data;
  std::cin >> T;
  while (T-- > 0) {
    std::cin >> data;
    root = myTree.insert(root, data);
  }
  myTree.levelOrder(root);
  return 0;
}
