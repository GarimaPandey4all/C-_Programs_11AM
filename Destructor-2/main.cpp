#include <iostream>

using namespace std;

class Hello
{
public:
    Hello()
    {
        cout<<"Hello World"<<endl;
    }

    //Destructor
    ~Hello()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    Hello obj;

    return 0;
}
