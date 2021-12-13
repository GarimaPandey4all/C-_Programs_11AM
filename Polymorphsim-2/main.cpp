#include <iostream>

using namespace std;

//Overriding: when parent feature is outdated then you want to hide the parent feature
//by using overriding

class Parent {

public:
    Parent()
    {
        cout<<"Parent Class"<<endl;
    }

    void contNumber()
    {
        cout<<"This is Parent Class Method"<<endl;
    }
};

class Child : public Parent {

public:
    Child()
    {
        cout<<"Child Class"<<endl;
    }
    //Overriding
    void contNumber()
    {
        cout<<"This is Child Class Method"<<endl;
    }
};

int main()
{
    Child obj;
    obj.contNumber();

    return 0;
}
