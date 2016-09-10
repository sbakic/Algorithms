/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node {
     int data;
     struct Node *next;
  };
*/

int GetNode(Node *head, int positionFromTail) {
  // This is a "method-only" submission.
  // You only need to complete this method.
  Node *endNode = head, *t = head;
  positionFromTail++;
  while (positionFromTail--) endNode = endNode->next;
  while (endNode) {
    t = t->next;
    endNode = endNode->next;
  }
  return t->data;
}
