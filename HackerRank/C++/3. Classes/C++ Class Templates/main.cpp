#include <bits/stdc++.h>

using namespace std;

template <class T> class AddElements {
  public:
    T a;
    AddElements (T element) {
      a = element;
    }
    T add(T b) {
      return a + b;
    }
    T concatenate(T b) {
      return a + b;
    }
};

int main () {
  int t;
  cin >> t;
  while (t--) {
    string type;
    cin >> type;
    if (type == "float") {
      double element1, element2;
      cin >> element1 >> element2;
      AddElements<double> myfloat (element1);
      cout << myfloat.add(element2) << endl;
    }
    else if (type == "int") {
      int element1, element2;
      cin >> element1 >> element2;
      AddElements<int> myint (element1);
      cout << myint.add(element2) << endl;
    }
    else if (type == "string") {
      string element1, element2;
      cin >> element1 >> element2;
      AddElements<string> mystring (element1);
      cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
