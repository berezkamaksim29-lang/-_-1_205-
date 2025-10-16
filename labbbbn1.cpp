#include "complex.h"
#include <locale>  

int main() {
    setlocale(LC_ALL, "ukrainian");  

    Complex c;
    c.Read();
    c.Display();
    cout << "Результат пiднесення у степiнь: " << c.Power() << endl;

    return 0;
}
