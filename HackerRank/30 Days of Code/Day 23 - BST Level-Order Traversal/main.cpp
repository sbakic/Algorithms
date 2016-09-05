#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *left, *right;

  Node(int data) {
    this->data = data;
    left = right = 0;
  }
};

class Solution {
public:
  Node* insert(Node* root, int data) {
    if(root == NULL) {
      return new Node(data);
    }
    else {
      Node* cur;
      if(data <= root->data){
        cur = insert(root->left, data);
        root->left = cur;
      }
      else{
        cur = insert(root->right, data);
        root->right = cur;
      }
      return root;
    }
  }

  void levelOrder(Node *root) {
    vector<Node> v;
    v.push_back(*root);
    while (!v.empty()) {
      Node curr = v[0];
      cout << curr.data << " ";
      if (curr.left) v.push_back(*curr.left);
      if (curr.right) v.push_back(*curr.right);
      v.erase(v.begin(), v.begin() + 1);
    }
  }
};

int main() {
  Solution myTree;
  Node* root = 0;
  int T, data;
  cin >> T;
  while (T-- > 0) {
    cin >> data;
    root = myTree.insert(root, data);
  }
  myTree.levelOrder(root);
  return 0;
}
