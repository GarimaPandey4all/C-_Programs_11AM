#include <iostream>

using namespace std;


class Parent1 {

public:

    Parent1()
    {
        cout<<"Parent1 Class Method"<<endl;
    }
};


class Parent2 {

public:

    Parent2()
    {
        cout<<"Parent2 Class Method"<<endl;
    }
};


//Multiple
class Child : public Parent1, public Parent2 {

public:
    Child()
    {
        cout<<"Child Class Method"<<endl;
    }
};

int main()
{
    Child obj;

    return 0;
}

