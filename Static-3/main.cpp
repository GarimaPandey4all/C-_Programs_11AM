#include <iostream>

using namespace std;

void func()
{
    static int counter = 1;
    cout<<"Counter is: "<<counter++<<endl;
}

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        func();
    }

    return 0;
}
