#include <iostream>
using namespace std;

class Complex
{
public:
    double real, imag;

public:
    Complex(double r = 0.0, double i = 0.0)
    {
        real = r;
        imag = i;
    }
    Complex operator*(const Complex &other) const
    {
        return Complex(real * other.real, imag * other.imag);
    }
};

int main()
{
    Complex c1(3, 4), c2(2, 4);
    cout<<"1st Complex number is "<<c1.real<<" + "<<c1.imag<<"i"<<endl;
    cout<<"2ns Complex number is "<<c2.real<<" + "<<c2.imag<<"i"<<endl;
    Complex c3 = c1 * c2;
    cout<<"After Multiplying we get: ";
    cout << "("<<c3.real<<")"<< " * i(" << c3.imag <<")"<< endl;
    return 0;
}
