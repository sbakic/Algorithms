#include <bits/stdc++.h>

using namespace std;

class Rectangle {
  public:
    int width, height;
    void Display(){
      cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle{
  public:
    void Input(){
      int a, b;
      cin >> a >> b;
      width = a;
      height = b;
    }
    void  Display() {
      cout << width * height;
    }
};

int main() {
  RectangleArea r_area;
  r_area.Input();
  Rectangle *r;
  r=&r_area;
  r->Display();
  r_area.Display();
  return 0;
}

