#include <bits/stdc++.h>

using namespace std;

struct node {
  int data, count;
  node *left;
  node *right;
  node *parent;

  node() {
    data = -1;
    count = -1;
    left = right = parent = 0;
  }
};

node* create_node(node *parent, int data) {
  node *newNode = new node();
  newNode->data = data;
  newNode->count = 0;
  newNode->parent = parent;
  return newNode;
}

void add_node(node *root, deque<int> d) {
  node *parent = root;
  for (int i = 0; i < (int) d.size(); i++) {
    if (d[i] == 1) {
      if (!parent->right) {
        node *newNode = create_node(parent, d[i]);
        parent->right = newNode;
        parent = newNode;
      }
      else {
        parent = parent->right;
      }
    }
    else {
      if (!parent->left) {
        node *newNode = create_node(parent, d[i]);
        parent->left = newNode;
        parent = newNode;
      }
      else {
        parent = parent->left;
      }
    }
    parent->count++;
  }
}
void remove_node(node *root, deque<int> d) {
  node *parent = root;
  for (int i = 0; i < (int) d.size(); i++) {
    if (d[i] == 1) parent = parent->right;
    else parent = parent->left;
  }
  while (true) {
    bool check = (parent->parent->data == -1? true : false);
    parent->count--;
    parent = parent->parent;
    if (parent->left && parent->left->count == 0) parent->left = 0;
    else if (parent->right && parent->right->count == 0) parent->right = 0;
    if (check) break;
  }
}

void search_node(node *root, deque<int> d, int x) {
  node *parent = root;
  int curr = 0;
  for (int i = 0, j = 29; i < (int) d.size(); i++, j--) {
    if (d[i] == 1) {
      if (parent->left) parent = parent->left;
      else parent = parent->right;
    }
    else {
      if (parent->right) parent = parent->right;
      else parent = parent->left;
    }
    curr += (parent->data << j);
  }
  printf("%d\n", curr ^ x);
}


int main() {
  node *root = new node();
  deque<int> d_zero;
  while (d_zero.size() < 30) d_zero.push_back(0);
  add_node(root, d_zero);
  int q;
  scanf("%d", &q);
  while (q--) {
    char c;
    int x, curr;
    deque<int> d;
    scanf(" %c %d", &c, &x);
    curr = x;
    while (curr) {
      d.push_front(curr % 2);
      curr /= 2;
    }
    while (d.size() < 30) d.push_front(0);
    if (c == '+') add_node(root, d);
    else if (c == '-') remove_node(root, d);
    else search_node(root, d, x);
  }
  return 0;
}
