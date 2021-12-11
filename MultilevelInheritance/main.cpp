#include <iostream>

using namespace std;


class Parent {

public:

    Parent()
    {
        cout<<"Parent Class Method"<<endl;
    }
};


class Child1 : public Parent {

public:

    Child1()
    {
        cout<<"Child1 Class Method"<<endl;
    }
};


//Multiple
class Child2 : public Child1 {

public:
    Child2()
    {
        cout<<"Child2 Class Method"<<endl;
    }
};

int main()
{
    Child2 obj;

    return 0;
}

