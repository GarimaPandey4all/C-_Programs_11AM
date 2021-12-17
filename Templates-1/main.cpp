#include <iostream>

using namespace std;

//1. Function Template

template <class T>
void add(T a, T b)
{
    cout<<"Addition is: "<<(a + b)<<endl;
}

int main()
{
    add(10, 20);

    add(34.56f, 67.78f);

    add(732.7, 567.9);

    return 0;
}
