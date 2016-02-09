/*
  Reverse a doubly linked list, input list may also be empty
  Node is defined as
  struct Node {
    int data;
    Node *next;
    Node *prev;
  };
*/

Node* Reverse(Node* head) {
  // Complete this function
  // Do not write the main method.
  Node *temp = head, *newHead = 0;
  while (head) {
    head = head->next;
    temp->next = newHead;
    newHead = temp;
    temp = head;
    newHead->prev = temp;
  }
  return newHead;
}
