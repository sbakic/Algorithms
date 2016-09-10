/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node {
     int data;
     struct Node *next;
  };
*/

Node* Reverse(Node *head) {
  // Complete this method
  Node *temp = head, *newHead = 0;
  while (head) {
    head = head->next;
    temp->next = newHead;
    newHead = temp;
    temp = head;
  }
  return newHead;
}
