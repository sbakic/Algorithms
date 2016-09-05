#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = 0;
  }
};

class Solution{
public:
  Node* insert(Node *head, int data) {
    Node *newNode = new Node(data);
    if (!head) head = newNode;
    else {
      Node *t = head;
      while (t->next) t = t->next;
      t->next = newNode;
    }
    return head;
  }

  void display(Node *head) {
    Node *start = head;
    while (start) {
      cout << start->data << " ";
      start = start->next;
    }
  }
};

int main() {
	Node* head = 0;
  Solution mylist;
  int T, data;
  cin >> T;
  while (T-- > 0) {
    cin >> data;
    head = mylist.insert(head, data);
  }
	mylist.display(head);
  return 0;
}
