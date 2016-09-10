/*
  Insert Node in a doubly sorted linked list
  After each insertion, the list should be sorted
  Node is defined as
  struct Node {
    int data;
    Node *next;
    Node *prev
  }
*/

Node* SortedInsert(Node *head, int data) {
  // Complete this function
  // Do not write the main method.
  Node *newNode = new Node();
  newNode->data = data;
  if (!head) {
    head = newNode;
    newNode->prev = 0;
    newNode->next = 0;
  }
  else {
    if (data <= head->data) {
      newNode->next = head;
      head->prev = newNode;
      newNode->prev = 0;
      head = newNode;
    }
    else {
      Node *t = head;
      while (t->next && data > t->next->data) t = t->next;
      newNode->next = t->next;
      t->next = newNode;
      if (newNode->next) newNode->next->prev = newNode;
      newNode->prev = t;
    }
  }
  return head;
}
