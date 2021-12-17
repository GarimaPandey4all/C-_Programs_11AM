#include <iostream>

using namespace std;

class Parent {

protected:
    int rollno;
};

class Child : public Parent {

public:

    Child(int r)
    {
        rollno = r;
    }

    void display()
    {
        cout<<"Roll no: "<<rollno<<endl;
    }
};

int main()
{
    Child obj(100);
    obj.display();

    return 0;
}
