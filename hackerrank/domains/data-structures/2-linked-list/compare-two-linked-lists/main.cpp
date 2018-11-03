/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node {
     int data;
     struct Node *next;
  };
*/

int CompareLists(Node *headA, Node* headB) {
  // This is a "method-only" submission.
  // You only need to complete this method
  if (!headA && !headB) return 1;
  else if (!headA && headB || headA && !headB) return 0;
  else {
    Node *tempA = headA, *tempB = headB;
    while (tempA && tempB) {
      if (tempA->data != tempB->data) return 0;
      tempA = tempA->next;
      tempB = tempB->next;
    }
    if (tempB || tempB) return 0;
  }
  return 1;
}
