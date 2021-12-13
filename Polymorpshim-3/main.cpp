#include <iostream>

using namespace std;
//
//Complex:
//8 + i7: 8 - real, 7-imag
//
//  8 + i7
//+ 5 + i10
//  13 + i17


class Complex {

private:
    int real, imag;

public:

    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    void print()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};

int main()
{
    Complex obj1(5, 8);
    Complex obj2(3, 7);

    Complex obj3;

    obj3 = obj1 + obj2; // obj3 = obj1.add(obj2);

    obj3.print();

    return 0;
}
