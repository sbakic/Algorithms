/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node {
     int data;
     struct Node *next;
  };
*/

Node* MergeLists(Node *headA, Node* headB) {
  // This is a "method-only" submission.
  // You only need to complete this method
  Node *tempA = headA, *tempB = headB, *newList = 0, *t;
  while (tempA || tempB) {
    Node *temp = new Node();
    if (tempA && tempB) {
      if(tempA->data <= tempB->data) {
        temp->data = tempA->data;
        tempA = tempA->next;
      }
      else if(tempA->data >= tempB->data) {
        temp->data = tempB->data;
        tempB = tempB->next;
      }
    }
    else if (tempA) {
      temp->data = tempA->data;
      tempA = tempA->next;
    }
    else if (tempB) {
      temp->data = tempB->data;
      tempB = tempB->next;
    }
    if (!newList) newList = temp;
    else t->next = temp;
    t = temp;
    temp->next = 0;
  }
  return newList;
}
