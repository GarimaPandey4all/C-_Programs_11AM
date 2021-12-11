#include <iostream>

using namespace std;
//
//Inheritance: Reuseability
//
//class Relationship: Inheritance
//
//tyes of Inheritance:
//
//    1. Single Inheritance
//    2. Multiple Inheritance
//    3. Mutilevel Inheritance
//    4. Heirarhcical Inheritance
//    5. Hybrid Inheritance


//Parent: Parent - Base Class
class Parent {

public:

    void show()
    {
        cout<<"Parent Class Method"<<endl;
    }
};

//Child: Child - Derived Class
class Child : public Parent { // inheritance

public:
    void print()
    {
        cout<<"Child Class Method"<<endl;
    }
};

int main()
{
    Child obj;
    obj.print();
    obj.show();

    return 0;
}
