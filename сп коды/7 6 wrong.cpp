//6

#include <iostream>

// void sq(int a, int n){
//     double s = pow(a, n);
    
//     std::cout << s;
// }


// int main() {
//     double num1, int num2; //a^n
//     std::cin >> num1 >> num2;
    
//     sq();
    
//     return 0;
// }


//Быстрое возведение числа num в степень deg
long powerFast(long num, long deg) {
    long result = 1;
    while(deg) {
        if (deg % 2 == 0) {
            deg /= 2;
            num *= num;
        }
        else {
            deg--;
            result *= num;
        }
    }

    return result;
}