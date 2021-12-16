#include <iostream>

using namespace std;

class Example
{
public:

    static void func()
    {
        cout<<"this is a static function"<<endl;
    }
};

int main()
{
    Example::func();

    return 0;
}
