/*
  Insert Node at a given position in a linked list
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as
  struct Node {
     int data;
     struct Node *next;
  };
*/

Node* InsertNth(Node *head, int data, int position) {
  // Complete this method only
  // Do not write main function.
  Node *newNode = new Node();
  newNode->data = data;
  if (!head || !position) {
    newNode->next = head;
    head = newNode;
  }
  else {
    int count = 0;
    Node *t = head;
    while (count + 1 != position && t->next) {
      t = t->next;
      count++;
    }
    newNode->next = t->next;
    t->next = newNode;
  }
  return head;
}
