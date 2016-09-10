#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data){
    this->data = data;
    next = 0;
  }
};

class Solution {
public:
          Node* removeDuplicates(Node *head)
          {
            Node *tempL = head, *tempR = 0;
  if (head) tempR = head->next;
  while (tempR) {
    if (tempL->data == tempR->data) {
      tempR = tempR->next;
      tempL->next = tempR;
    }
    else {
      tempL = tempR;
      tempR = tempR->next;
    }
  }
  return head;
          }

  Node* insert(Node *head, int data) {
    Node* p = new Node(data);
    if (!head) {
      head = p;
    }
    else if (!head->next) {
      head->next = p;
    }
    else{
      Node *start = head;
      while (start->next) {
        start = start->next;
      }
      start->next = p;
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
  head = mylist.removeDuplicates(head);
	mylist.display(head);
  return 0;
}
