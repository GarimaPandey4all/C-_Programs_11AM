#include <iostream>

using namespace std;
//
//Polymorphism: Poly- Many, Morphism: Forms
//
//Person: Employee, Son, Father, Uncle, Brother etc

//Polymorpshim types:
//
//    1. Compile Time
//    function overloading, function overriding
//    2. Runtime
//    operator overloading

void func(int a, int b)
{
    cout<<"Addition of integer is "<<(a + b)<<endl;
}


void func(float a, float b)
{
    cout<<"Addition of float is "<<(a + b)<<endl;
}


void func(int a, int b, int c)
{
    cout<<"Addition of three numbers is "<<(a + b + c)<<endl;
}

int main()
{
    func(10, 20);
    func(10, 20, 30);
    func(334.5f, 45.6f);

    return 0;
}
