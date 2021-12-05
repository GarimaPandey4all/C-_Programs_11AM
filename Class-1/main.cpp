#include <iostream>

using namespace std;

//Encapsulation: Wrap all the variables and methods into a single unit.
//Example: class
//
//Good Encapsulation = Encapsulation + Data Hiding (Data Security) , Abstraction

class Add {

//public:
private: // Data hiding (Data Security)
    int a, b; // data members/class variables/instance variables

//    void setData() // setter
//    {
//        a = 10;
//        b = 20;
//    }

public:
    //x, y are local variables
    //void setData(int x, int y)
    void setData(int a, int b)
    {
        //this keyword: it holds current object address/reference

        this->a = a;
        this->b = b;

        //instance variable = local variable
//        a = x;
//        b = y;
    }

    void getData() // getter
    {
        cout<<"Addition is:"<<a+b<<endl; // endl: enter or new line
    }

};


int main()
{
    Add obj;

    //obj.a = 40; // error // data security

    obj.setData(10, 20);
    //obj.setData();
    obj.getData();

    return 0;
}
