#include <iostream>

using namespace std;

//2. Class Template

template <class T>
class Calculator
{
private :
    T a, b;

public:
    void setData(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    void calc()
    {
        cout<<"Addition is: "<<(a + b)<<endl;
        cout<<"Subtraction is: "<<(a - b)<<endl;
        cout<<"Division is: "<<(a / b)<<endl;
        cout<<"Multiplication is: "<<(a * b)<<endl;
    }
};

int main()
{
    Calculator<int> obj1;
    obj1.setData(10, 20);
    obj1.calc();

    cout<<"********************************************"<<endl;

    Calculator<float> obj2;
    obj2.setData(10.67f, 20.78f);
    obj2.calc();

    cout<<"********************************************"<<endl;

    Calculator<double> obj3;
    obj3.setData(10.89, 20.35);
    obj3.calc();

    return 0;
}
