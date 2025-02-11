//задача 9.для введенной пользователем строки, выведите её со строчными символами в заглавном формате и с заглавными в строчном. 
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "введите строку: "; cin >> s;
    for (char &c : s) {
        c ^= 32;
    }
    cout << s << endl;
    return 0;
}