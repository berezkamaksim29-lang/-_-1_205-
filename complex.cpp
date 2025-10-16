#include "complex.h"
#include <cmath>

bool Complex::Init(double f, double s) {
    if (f == 0 && s <= 0) {
        cout << "Помилка: 0 не можна пiдносити до нульового або вiд’ємного степеня!" << endl;
        return false;
    }
    first = f;
    second = s;
    return true;
}
    
void Complex::Read() {
    double f, s;
    do {
        cout << "Введiть основу (first): ";
        cin >> f;
        cout << "Введiть показник степеня (second): ";
        cin >> s;
    } while (!Init(f, s));
}

void Complex::Display() const {
    cout << "Основа: " << first << ", показник: " << second << endl;
}

double Complex::Power() const {
    return pow(first, second);
}
