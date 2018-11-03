#include <bits/stdc++.h>

using namespace std;

class Book {
protected:
  string title, author;
public:
  Book(string title,string author) {
    this->title = title;
    this->author = author;
  }
  virtual void display() = 0;
};

class MyBook : public Book {
public:
  int price;

  MyBook(string title, string author, int price) : Book (title, author) {
    this->price = price;
  }

  void display() {
    cout << "Title: " << this->title << '\n';
    cout << "Author: " << this->author << '\n';
    cout << "Price: " << this->price << '\n';
   }
};

int main() {
  string title, author;
  int price;
  getline(cin, title);
  getline(cin, author);
  cin >> price;
  MyBook novel(title, author, price);
  novel.display();
  return 0;
}
