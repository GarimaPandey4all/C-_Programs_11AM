#include <iostream>

using namespace std;

//hybrid: Multiple + Heirarchical

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

//multiple
class Child1 : public Parent1, public Parent2 {

public:

    Child1()
    {
        cout<<"Child1 Class Method"<<endl;
    }
};


// heirarchical
class Child2 : public Parent1 {

public:
    Child2()
    {
        cout<<"Child2 Class Method"<<endl;
    }
};

int main()
{
    Child2 obj;
    Child1 obj2;

    return 0;
}

