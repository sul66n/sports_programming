#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  if (!numbers.empty()) {
    std::cout << "Первый элемент: " << numbers.front() << std::endl;
    std::cout << "Последний элемент: " << numbers.back() << std::endl;
  } else {
    std::cout << "Вектор пуст." << std::endl;
  }

  return 0;
}

