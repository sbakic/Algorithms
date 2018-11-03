/*
  Node is defined as
  struct node {
    int data;
    node* left;
    node* right;
  };
*/

node* insert(node* root, int value) {
  node *newNode = new node();
  newNode->data = value;
  newNode->left = 0;
  newNode->right = 0;
  if (!root) {
    root = newNode;
    return root;
  }
  if (root->data > value) {
    if (root->left) insert(root->left, value);
    else root->left = newNode;
  }
  else if (root->data < value) {
    if (root->right) insert(root->right, value);
    else root->right = newNode;
  }
  return root;
}
