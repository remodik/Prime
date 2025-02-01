#include <windows.h>
#include <iostream>
#include <format>
#include "Prime.h"
int main() {
    SetConsoleOutputCP(CP_UTF8);
    Prime num1;
    num1.setValue(3);
    Prime num2 = num1.nextPrime();

    const bool result = num1.checkPrime(17);
    num2.setValue(17);
    const int count = num2.countBetween(num1);
    const bool ans = num2.isValid();

    cout << format("Следующее простое число после {}: ", num1.getValue()) << num2.getValue() << endl;
    cout << format("Число {} является простым? ", num2.getValue()) << result << endl;
    cout << format("Количество простых чисел между {} и {}: ", num1.getValue(), num2.getValue()) << count << endl;
    cout << format("Является ли число {} корректным простым числом? ", num2.getValue()) << (ans ? "Да" : "Нет") << endl;
}
