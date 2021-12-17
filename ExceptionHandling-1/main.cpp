#include <iostream>

using namespace std;

//Exception: Abnormal Condition / Runtime Error, which terminates the program flow.

int main()
{
    //int a = 11;
    float a = 3.14f;

    //guarded region
    try {

        if(a == 11)
        {
            throw 11; // exception throw
        }
        if(a == 3.14f)
        {
            throw 3.14f;
        }

        cout<<"Try-Block"<<endl;

    }

    //exception handling code
    catch(int e)
    {
        cout<<"Exception is here "<<e<<endl;
    }

    catch(float e)
    {
        cout<<"Exception here "<<e<<endl;
    }

    return 0;
}
