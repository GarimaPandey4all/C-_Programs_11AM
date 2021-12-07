#include <iostream>

using namespace std;

//Constructor: It is a special type of method, because constructor name same as class name.
//It is used to initialize the instance variables / class variables / data members.
//When we create/construct an object of any class then constructor called automatically.

class Add {

private:
    int a, b;

public:
    //default constructor
//    Add()
//    {
//        a = 10;
//        b = 20;
//    }

    //Parameterized Constructor
    Add(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void getData()
    {
        cout<<"Addition is: "<<(a + b)<<endl;
    }

};

int main()
{
    Add obj(10, 20);

    obj.getData();

    return 0;
}
