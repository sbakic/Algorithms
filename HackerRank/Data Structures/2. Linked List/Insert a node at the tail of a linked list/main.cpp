/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as

  struct Node {
    int data;
    struct Node *next;
  }
*/

Node* Insert(Node *head, int data) {
  // Complete this method
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = 0;
  if (!head) {
    head = newNode;
  }
  else {
    Node *t = head;
    while (t->next) t = t->next;
    t->next = newNode;
  }
  return head;
}
