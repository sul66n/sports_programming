/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    bool b = true;
    int k;
    char c = 'A';
    cout << "введите число k: "; cin >> k;
    
    cout << "Логический тип:" << endl;
    cout << "bool + k = " << (b + k) << '\n';
    cout << "bool - k = " << (b - k) << endl;
    cout << "bool / k = " << (b / k) << endl;
    cout << "bool * k = " << (b * k) << endl;
    cout << "bool % k = " << (b % k) << endl;
    
    cout << "Символьный тип:" << endl;
    cout << "char + k = " << char(c + k) << endl;
    cout << "char - k = " << char(c - k) << endl;
    cout << "char / k = " << char(c / k) << endl;
    cout << "char * k = " << char(c * k) << endl;
    cout << "char % k = " << char(c % k) << endl;
    return 0;
}