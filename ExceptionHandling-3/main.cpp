#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    try {

        cout<<"Enter value for a and b:";
        cin>>a>>b;

        if(b == 0)
        {
            throw b;
        }
        else {
            c = a / b;
            cout<<"Division is:"<<c<<endl;
        }
    }

    catch(...)
    {
        cout<<"You tried to divide a number by 0"<<endl;
    }

//    catch(int e)
//    {
//        cout<<"You tried to divide a number by "<<e<<endl;
//    }

    return 0;
}
