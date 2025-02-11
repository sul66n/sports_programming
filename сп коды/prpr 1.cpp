#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main() {
    vector<int> a(1000, 0);
    vector<int> b(1000, 999);
    vector<int> c(10);
    iota(c.begin(), c.end(), 1);
    reverse(c.begin(), c.end());
    return 0;
}