#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> first_set(N);
  std::vector<int> second_set(N);

  for (int i = 0; i < N; ++i) {
    std::cin >> first_set[i];
  }

  for (int i = 0; i < N; ++i) {
    std::cin >> second_set[i];
  }

  
  std::unordered_map<int, int> count_map;// Подсчет количества чисел из второго набора в первом
  for (int number : first_set) {
    count_map[number]++;
  }

  for (int number : second_set) {
    std::cout << number << ": " << count_map[number] << std::endl;
  }

  return 0;
}

