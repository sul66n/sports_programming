/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Напишите программу, которая переводит символьное значение цифры (от ‘0’ до ‘9’) в его 
//числовую интерпретацию (допустим, перевод ‘4’ -> 4) и выводит результат полученного числа в квадрате.
#include <iostream>
using namespace std;
int main()
{
    char k;
    int n, s;
    cout << "введите число от 0 до 9: "; cin >> k;
    n = k -'0';
    s = n * n;
    cout << "квадрат числа = " << s << '\n'; 
    return 0;

}