#include <iostream>
#include <vector>

std::vector<int> simple_prefix_function(const std::string& s) {
  int n = s.size();
  std::vector<int> p(n);
  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (s.substr(0, j) == s.substr(i - j + 1, j)) p[i] = j;
    }
  }
  return p;
}

std::vector<int> prefix_function(const std::string& s) {
  std::vector<int> p(s.size());
  for (int i = 1; i < s.size(); i++) {
    int j = p[i - 1];
    while (j > 0 && s[j] != s[i]) j = p[j - 1];
    if (s[i] == s[j]) j++;
    p[i] = j;
  }
  return p;
}

std::vector<int> z_function(const std::string& s) {
  int n = s.size();
  std::vector<int> z(n, 0);
  for (int i = 1; i < n; i++) {
    while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
      z[i]++;
    }
  }
  return z;
}

int main() {
  std::string s = "abbbaba";
  std::vector<int> pi = z_function(s);

  for (int value : pi) {
    std::cout << value << " ";
  }
  std::cout << '\n';

  return 0;
}
