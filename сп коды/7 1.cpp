//1

#include <iostream>

int sum(int a, int b) {
  return a + b;
}

int main() {
    
  int num1, num2;
  
  std::cin >> num1;
  std::cin >> num2;

  std::cout << "Сумма: " << sum(num1, num2) << std::endl;

  return 0;
}
