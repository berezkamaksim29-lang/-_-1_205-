#pragma once
#include <iostream>
using namespace std;

class Complex {
private:
    double first;
    double second;

public:
    bool Init(double f, double s);
    void Read();
    void Display() const;
    double Power() const;
};
