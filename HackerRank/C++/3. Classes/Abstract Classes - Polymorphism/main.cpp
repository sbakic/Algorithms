#include <bits/stdc++.h>

using namespace std;

struct Node {
  Node* next;
  Node* prev;
  int value;
  int key;
  Node(Node* p, Node* n, int k, int val):prev(p), next(n), key(k), value(val){};
  Node(int k, int val):prev(0), next(0), key(k), value(val){};
};

class Cache {
  protected:
    map<int, Node*> mp; //map the key to the node in the linked list
    int cp;  //capacity
    Node* tail; // double linked list tail pointer
    Node* head; // double linked list head pointer
    virtual void set(int, int) = 0; //set function
    virtual int get(int) = 0; //get function
};

class LRUCache : Cache{
  public:
    LRUCache (int size) {
      cp = size;
    }
    int curr = 1;
    void set(int key, int value) {
      Node* newNode = new Node(value, curr);
      map<int, Node*>::iterator i = mp.find(key);
      if (i != mp.end()) {
        mp.erase(i);
        for (map<int, Node*>::iterator i = mp.begin(); i != mp.end(); i++) {
          i->second->value--;
        }
      }
      else if (mp.size() == cp) {
        for (map<int, Node*>::iterator i = mp.begin(); i != mp.end(); i++) {
          i->second->value--;
        }
        for (map<int, Node*>::iterator i = mp.begin(); i != mp.end(); i++) {
          if (i->second->value == 0) {
            mp.erase(i);
            break;
          }
        }
      }
      mp.insert(make_pair(key, newNode));
      if (curr < cp) curr++;
    }
    int get(int key) {
      map<int, Node*>::iterator i = mp.find(key);
      if (i == mp.end()) {
        return -1;
      }
      else return i->second->key;
    }
};

int main() {
  int n, t;
  cin >> t >> n;
  LRUCache l(n);
  while (t--) {
    string command;
    cin >> command;
    if (command == "get") {
      int key;
      cin >> key;
      cout << l.get(key) << endl;
    }
    else if (command == "set") {
      int key, value;
      cin >> key >> value;
      l.set(key, value);
    }
  }
  return 0;
}
