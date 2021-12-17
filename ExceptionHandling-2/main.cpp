#include <iostream>

using namespace std;

void func()
{
    int age = 18;

    if(age > 17)
    {
        throw 18;
    }
    else {
        cout<<"Enter Valid Value"<<endl;
    }
}

int main()
{
    try {

        func();
    }

    catch(int e)
    {
        cout<<"Age Limit is Fine "<<e<<endl;
    }

    return 0;
}
