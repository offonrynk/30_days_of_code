#include <algorithm>
#include <iostream>
#include <vector>
class Node {
public:
  int data;
  Node *next;
  Node(int d)
  {
    data = d;
    next = NULL;
  }
};
class Solution {
public:
  //---------------------------------------------------------------
  /*!
   * function rto remove duplicate nodes
   * @return newhead position of the list
   */
  Node *removeDuplicates(Node *head)
  {
    Node *node = head;
    if (head == nullptr) {
      head = node;
    }
    else {
      while (node->next != nullptr) {
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
    Node *p = new Node(data);
    if (head == NULL) {
      head = p;
    }
    else if (head->next == NULL) {
      head->next = p;
    }
    else {
      Node *start = head;
      while (start->next != NULL) {
        start = start->next;
      }
      start->next = p;
    }
    return head;
  }
  void display(Node *head)
  {
    Node *start = head;
    while (start) {
      std::cout << start->data << " ";
      start = start->next;
    }
  }
};

int main()
{
  Node *head = NULL;
  Solution mylist;
  int T, data;
  std::cin >> T;
  while (T-- > 0) {
    std::cin >> data;
    head = mylist.insert(head, data);
  }
  head = mylist.removeDuplicates(head);

  mylist.display(head);
}
