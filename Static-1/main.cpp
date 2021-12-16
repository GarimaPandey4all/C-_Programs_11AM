#include <iostream>

using namespace std;

class Student {

private:
    int age;
    static int marks;

public:
    void setData(int age)
    {
        this->age = age;
    }

    void getData();

//    void getData()
//    {
//        cout<<age<<" "<<marks<<endl;
//    }
};

void Student :: getData()
{
    cout<<age<<" "<<marks<<endl;
}

//:: scope resolution operator
int Student :: marks = 576; // initialize static variable

int main()
{
    Student obj;
    obj.setData(10);
    obj.getData();

    return 0;
}
