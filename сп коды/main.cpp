#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i, root;
    for (i = 1; i <= 100; ++i) {
        root = <int>(sqrt(i));
        if (root * root == i) {
            cout << "корень " << i << " = " << root << endl;
        }
    }
    return 0;
}