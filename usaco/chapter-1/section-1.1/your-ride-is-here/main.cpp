/*
ID: sbakic
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char comet[7], group[7];
    fin >> comet >> group;
    long long instanceC = 1, instanceG = 1;
    for (int i = 0; comet[i] != '\0'; i++) {
      instanceC *= comet[i] - 'A' + 1;
    }
    for (int i = 0; group[i] != '\0'; i++) {
      instanceG *= group[i] - 'A' + 1;
    }
    instanceC % 47 == instanceG % 47? fout << "GO\n": fout << "STAY\n";
    return 0;
}
