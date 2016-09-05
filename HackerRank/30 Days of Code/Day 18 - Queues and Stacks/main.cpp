#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  stack<char> s;
  queue<char> q;

  void pushCharacter(char ch) {
    s.push(ch);
  }

  void enqueueCharacter(char ch) {
    q.push(ch);
  }

  char popCharacter() {
    char top = s.top();
    s.pop();
    return top;
  }

  char dequeueCharacter() {
    char first = q.front();
    q.pop();
    return first;
  }
};

int main() {
  string s;
  getline(cin, s);
  Solution obj;
  for (int i = 0; i < s.length(); i++) {
    obj.pushCharacter(s[i]);
    obj.enqueueCharacter(s[i]);
  }
  bool isPalindrome = true;
  for (int i = 0; i < s.length() / 2; i++) {
    if (obj.popCharacter() != obj.dequeueCharacter()) {
      isPalindrome = false;
      break;
    }
  }
  if (isPalindrome) {
    cout << "The word, " << s << ", is a palindrome.";
  } else {
    cout << "The word, " << s << ", is not a palindrome.";
  }
  return 0;
}
