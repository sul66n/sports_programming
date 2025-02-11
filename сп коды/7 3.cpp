//3

#include <iostream>

void ch(int &x) { //ссылка
  x = x * x;
}

int main() {
  int num;
  std::cin >> num;
  
  ch(num);
  
  std::cout << num; 
  
  return 0;
}

