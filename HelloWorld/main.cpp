#include <iostream>

//iostream: input / output stream(flow of data)

using namespace std;

class HelloWorld {

//    1. Data Members(variables)
//    2. Member Functions (Method)

//Access Modifier/Specifier
//1. public
//2. private
//3. protected - Inheritance

public:
    void display()
    {
     cout<<"Hello World"<<endl; // cout: print the output on the output screen
    }

};

int main()
{
    HelloWorld obj;

    obj.display();

    return 0;
}
