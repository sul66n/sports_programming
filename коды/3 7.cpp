//задача 7
#include <iostream>
using namespace std;
int main() {
    int n, f=1, i, s=0;
    cout << "введите число"; cin >> n;
    for (int i = 1;  i <= n; f*=i, s += f, i++);
    cout << "сумма факториалов до " << n << " = " << s << endl;
    return 0;
}