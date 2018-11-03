#include <iostream>

using namespace std;

int main(){
  long long k, l, i, importance = 0;
  cin >> k >> l;
  i = k;
  while(i < l) {
    i *= k;
    importance++;
  }
  (i == l) ? cout <<"YES\n" << importance : cout << "NO";
  return 0;
}
