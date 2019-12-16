#include <iostream>

class Node {
public:
  int data;
  Node *next;
  Node(int d)
  {
    data = d;
    next = nullptr;
  }
};

class Solution {
public:
  Node *insert(Node *head, int data)
  {
    Node *newNode = new Node(data);
    if (head == nullptr) {
      head = newNode;
    }
    else {
      Node *temp = head;
      while (temp->next != nullptr) {
        temp = temp->next;
      }
      temp->next = newNode;
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
    std::cout << std::endl;
  }
};

int main()
{
  Node *head = nullptr;
  Solution mylist;

  int T, data;
  std::cin >> T;
  while (T-- > 0) {
    std::cin >> data;
    head = mylist.insert(head, data);
  }
  mylist.display(head);

  return 0;
}
