/*
  Find merge point of two linked lists
  Node is defined as
  struct Node {
    int data;
    Node* next;
  }
*/
int FindMergeNode(Node *headA, Node *headB) {
  // Complete this function
  // Do not write the main method.
  Node *tempA = headA, *tempB = headB;
  while (tempA != tempB) {
    tempA = tempA->next;
    tempB = tempB->next;
    if (!tempA) tempA = headB;
    if (!tempB) tempB = headA;
  }
  return tempA->data;
}
