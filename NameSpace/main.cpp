#include <iostream>

using namespace std;

namespace first {
    int value = 600;
}

namespace second {
    int y = 700;

    int func()
    {
        return y;
    }
}

//global
int value = 600;

int main()
{
    //local
    int value = 500;

    cout<<value<<endl;
    cout<<first::value<<endl;
    cout<<second::func()<<endl;

    //std::cout << "Hello world!" << std::endl;

    return 0;
}
