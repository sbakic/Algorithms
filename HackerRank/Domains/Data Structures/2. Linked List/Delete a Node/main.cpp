/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node {
     int data;
     struct Node *next;
  };
*/

Node* Delete(Node *head, int position) {
  // Complete this method
  if (!head);
  else if (!position) head = head->next;
  else {
    int count = 0;
    Node *t = head;
    while (count + 1 != position) {
      t = t->next;
      count++;
    }
    t->next = t->next->next;
  }
  return head;
}
