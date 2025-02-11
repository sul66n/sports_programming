#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double i, root;
    for (i = 1; i <= 1000; ++i) {
        root = (sqrt(i));
        cout << "sqrt(" << i << ") = " << root << endl;
    }
    return 0;
}