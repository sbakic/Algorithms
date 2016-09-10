#include <iostream>

using namespace std;

string make(string s, string format) {
  string hours = s.substr(0, 2);
  int a = (hours[0] - '0') * 10 + (hours[1] - '0');
  if (format == "PM") {
    switch (a) {
      case 12: return "12"; break;
      case 1: return "13"; break;
      case 2: return "14"; break;
      case 3: return "15"; break;
      case 4: return "16"; break;
      case 5: return "17"; break;
      case 6: return "18"; break;
      case 7: return "19"; break;
      case 8: return "20"; break;
      case 9: return "21"; break;
      case 10: return "22"; break;
      case 11: return "23"; break;
    }
  }
  else {
    switch (a) {
      case 12: return "00"; break;
      case 1: return "01"; break;
      case 2: return "02"; break;
      case 3: return "03"; break;
      case 4: return "04"; break;
      case 5: return "05"; break;
      case 6: return "06"; break;
      case 7: return "07"; break;
      case 8: return "08"; break;
      case 9: return "09"; break;
      case 10: return "10"; break;
      case 11: return "11"; break;
    }
  }
  return "ERROR";
}

int main() {
  string s;
  cin >> s;
  cout << make(s, s.substr(8,2)) + s.substr(2, 6);
  return 0;
}
