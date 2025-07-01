//задача 5
#include <iostream>
using namespace std;
int main() {
    int n, f=1, i;
    cout << "введите число"; cin >> n;
    for (int i = 1;  i <= n; f*=i, i++) ;
    cout << "факториал " << n << " = " << f << endl;
    return 0;
}