/*
ID: sbakic
PROG: namenum
LANG: C++
*/
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

char number[12], letter[12];
char dictionary[5000][13];
int solutions = 0;
int length;
ofstream fout ("namenum.out");

void find(int counter, int low, int high) {
  if (counter == length) {
    letter[counter] = '\0';
    for (int i = low; i < high; i++) {
      if (strcmp(letter, dictionary [i]) == 0) {
        fout << letter << endl;
        solutions++;
      }
    }
    return;
  }
  if (counter > 0) {
    for (int i = low; i <= high; i++) {
      if (letter[counter - 1] == dictionary [i][counter - 1]) {
        low = i;
        while (letter[counter - 1] == dictionary [i][counter - 1]) i++;
        high = i;
        break;
      }
      if (i == high) return;
    }
  }
  if (low > high) return;
  switch (number[counter]) {
    case '2': letter[counter] = 'A'; find(counter + 1, low, high);
              letter[counter] = 'B'; find(counter + 1, low, high);
              letter[counter] = 'C'; find(counter + 1, low, high);
              break;
    case '3': letter[counter] = 'D'; find(counter + 1, low, high);
              letter[counter] = 'E'; find(counter + 1, low, high);
              letter[counter] = 'F'; find(counter + 1, low, high);
              break;
    case '4': letter[counter] = 'G'; find(counter + 1, low, high);
              letter[counter] = 'H'; find(counter + 1, low, high);
              letter[counter] = 'I'; find(counter + 1, low, high);
              break;
    case '5': letter[counter] = 'J'; find(counter + 1, low, high);
              letter[counter] = 'K'; find(counter + 1, low, high);
              letter[counter] = 'L'; find(counter + 1, low, high);
              break;
    case '6': letter[counter] = 'M'; find(counter + 1, low, high);
              letter[counter] = 'N'; find(counter + 1, low, high);
              letter[counter] = 'O'; find(counter + 1, low, high);
              break;
    case '7': letter[counter] = 'P'; find(counter + 1, low, high);
              letter[counter] = 'R'; find(counter + 1, low, high);
              letter[counter] = 'S'; find(counter + 1, low, high);
              break;
    case '8': letter[counter] = 'T'; find(counter + 1, low, high);
              letter[counter] = 'U'; find(counter + 1, low, high);
              letter[counter] = 'V'; find(counter + 1, low, high);
              break;
    case '9': letter[counter] = 'W'; find(counter + 1, low, high);
              letter[counter] = 'X'; find(counter + 1, low, high);
              letter[counter] = 'Y'; find(counter + 1, low, high);
              break;
  }
}

int main() {
  int words;
  ifstream fin ("namenum.in");
  ifstream fdict ("dict.txt");
  for (words = 0; fdict >> dictionary[words++]; );
  fin >> number;
  length = strlen(number);
  find(0, 0, words);
  if (solutions == 0) fout << "NONE" << endl;
  return 0;
}
