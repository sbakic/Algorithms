#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int data;
  Node *left, *right;

  Node(int data){
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

  int getHeight(Node* root) {
    if(!root) return -1;
    return 1 + max(getHeight(root->right), getHeight(root->left));
  }
};

int main() {
  Solution myTree;
  Node* root = 0;
  int t;
  int data;
  cin >> t;
  while(t-- > 0){
    cin >> data;
    root = myTree.insert(root, data);
  }
  int height = myTree.getHeight(root);
  cout << height;
  return 0;
}
