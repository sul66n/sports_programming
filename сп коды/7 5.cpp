//5

#include <iostream>

int min_of_four(int a, int b, int c, int d){
    int m = a;

    if (b < m){
        m = b;
    }

    if (c < m){
        m = c;
    }

    if (d < m){
        m = d;
    }

    return m;
}


int main(){
    int num1, num2, num3, num4;
    std::cin >> num1 >> num2 >> num3 >> num4;
    int min = min_of_four(num1, num2, num3, num4);
    std::cout << "наименьшее: " << min << std::endl;

    return 0;
}

