//4

#include <iostream>

void print() {
    static int n = 1;
    std::cout << n << '\n';
    n += 2;
}

int main() {
    print();
    print();
    
    return 0;
}