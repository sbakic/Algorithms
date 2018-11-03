/*
ID: sbakic
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

pair<string, int> group[10];

int main() {
   ofstream fout ("gift1.out");
   ifstream fin ("gift1.in");
  int np, money, whom;
  string name;
  fin >> np;
  for (int i = 0; i < np; i++) {
    fin >> name;
    group[i].first = name;
    group[i].second = 0;
  }
  for (int i = 0; i < np; i++) {
    int position;
    fin >> name >> money >> whom;
    for (int j = 0; j < np; j++) {
      if (group[j].first == name) {
        group[j].second -= money;
        position = j;
        break;
      }
    }
    int gift = 0;
    if (whom != 0)
      gift = money / whom;
    for (int j = 0; j < whom; j++) {
      fin >> name;
      for (int z = 0; z < np; z++) {
        if (group[z].first == name) {
          group[z].second += gift;
          break;
        }
      }
    }
    if (whom != 0)
      group[position].second += (money % whom);
    else
      group[position].second += money;
  }
  for (int i = 0; i < np; i++) {
    fout << group[i].first << " " << group[i].second << endl;
  }
  return 0;
}
