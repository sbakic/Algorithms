#include <bits/stdc++.h>

using namespace std;

class Person {
public:
  int age;
  Person(int age);
  void yearPasses();
  void amIOld();
};

Person::Person(int age) {
  if (age < 0) {
    cout << "Age is not valid, setting age to 0." << '\n';
    age = 0;
  }
  this->age = age;
}

void Person::yearPasses() {
  this->age++;
}

void Person::amIOld() {
 if (this->age < 13) cout << "You are young." << '\n';
 else if (this->age >= 13 && this->age < 18) cout << "You are a teenager." << '\n';
 else cout << "You are old." << '\n';
}

int main() {
  int t;
	int age;
  cin >> t;
  while (t--) {
    cin >> age;
    Person p(age);
    p.amIOld();
    for (int i = 0; i < 3; i++) {
      p.yearPasses();
    }
    p.amIOld();
		cout << '\n';
  }
  return 0;
}
