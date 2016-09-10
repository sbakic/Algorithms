/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node {
     int data;
     struct Node *next;
  };
*/

Node* RemoveDuplicates(Node *head) {
  // This is a "method-only" submission.
  // You only need to complete this method.
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
