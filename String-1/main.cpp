#include <iostream>
#include <string>

using namespace std;

int main()
{
//    string name;
//
//    cout<<"Enter your name:";
//    //cin>>name;
//    getline(cin, name);
//
//    //gets(name); // not acceptable in C++, it is syntax of C lang.
//
//    cout<<"Your name is: "<<name;

    string str1;
    string str2;
    string fullName;

    cout<<"Enter First Name:";
    cin>>str1;

    cout<<"Enter Last Name:";
    cin>>str2;

    fullName = (str1 + str2);

    cout<<"Your Full Name is: "<<fullName<<endl;

    cout<<"Length of the Full Name is: "<<fullName.size()<<endl;

    return 0;
}
