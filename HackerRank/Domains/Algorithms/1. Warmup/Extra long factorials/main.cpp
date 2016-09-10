 #include <iostream>

using namespace std;

string multy(string a, string b) {
  int n = a.size(), m = b.size();
  int array[n + m];
  for (int i = 0; i < n + m; i++) {
    array[i] = 0;
  }
  for (int i = n - 1; i >= 0; i--) {
    for (int j = m - 1; j >= 0; j--) {
      array[i + j + 1] += (a[i] - '0') * (b[j] - '0');
    }
  }
  for (int i = n + m - 1; i >= 0; i--) {
    array[i - 1] += array[i] / 10;
    array[i] %= 10;
  }
  string s = "";
  for (int i = 0; i < n + m; i++) {
    s += array[i] + '0';
  }
  s.erase(0, min(s.find_first_not_of('0'), s.size() - 1));
  return s;
}

string power(int n) {
  string s = "1";
  int t = n;
  for (int i = 0; i < n; i++) {
    s = multy(s, to_string(t--));
  }
  return s;
}

int main(){
  int n;
  cin >> n;
  cout << power(n);
  return 0;
}

