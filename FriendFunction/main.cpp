#include <iostream>

using namespace std;

class Complex {

private:
    int real, imag;

public:

    void setData(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }

    friend Complex sum(Complex, Complex); // friend function Declare

};

Complex sum(Complex a, Complex b)
{
    Complex temp;

    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;

    return temp;
}

int main()
{
    Complex obj1, obj2, obj3;

    obj1.setData(4, 5);
    obj2.setData(4, 5);

    obj3 = sum(obj1, obj2);

    obj3.print();

    return 0;
}
