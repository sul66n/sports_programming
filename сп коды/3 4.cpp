//задача 4
#include <iostream>
using namespace std;
int main() {
    int n, f=1, i;
    cout << "введите число:"; cin >> n;
    for (int i = 2;  i <= n; ++i) {
            f*=i;
        }
    cout << n << "! = " << f << endl;
    return 0;
}