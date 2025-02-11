#include <iostream>
#include <vector>
#include <string>

int main() {
  int N;
  std::cin >> N;

  std::vector<std::string> lines(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> lines[i];
  }

  for (int i = 0; i < N / 2; ++i) {
    std::cout << lines[i] << ";";
    std::cout << lines[N - i - 1] << ";";
  }

  if (N % 2 != 0) {
    std::cout << lines[N / 2];
  }

  std::cout << std::endl;

  return 0;
}

