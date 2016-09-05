#include <bits/stdc++.h>

using namespace std;

class Person {
protected:
  string firstName, lastName;
  int id;

public:
  Person(string firstName, string lastName, int id) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = id;
  }
  void printPerson() {
    cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
  }
};

class Student : public Person {
private:
  vector<int> v;
public:
  Student(string firstName, string lastName, int id, vector<int> v) : Person(firstName, lastName, id) {
    this->v = v;
  }
  char calculate() {
    double avg = 0;
    for (int i = 0; i < (int) v.size(); i++) {
      avg += v[i];
    }
    avg /= v.size();
    if (avg < 40) return 'T';
    else if (avg >= 40 && avg < 55) return 'D';
    else if (avg >= 55 && avg < 70) return 'P';
    else if (avg >= 70 && avg < 80) return 'A';
    else if (avg >= 80 && avg < 90) return 'E';
    else if (avg >= 90 && avg <= 100) return 'O';
    return 'T';
  }
};

int main() {
	string firstName, lastName;
	int id, numScores;
	cin >> firstName >> lastName >> id >> numScores;
  vector<int> scores;
  for (int i = 0; i < numScores; i++) {
    int tmpScore;
    cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
