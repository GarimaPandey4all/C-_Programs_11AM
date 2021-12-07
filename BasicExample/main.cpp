#include <iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter any number:";
    cin>>n;

    (n % 2 == 0)?cout<<"Number is Even": cout<<"Number is Odd"<<endl;

    return 0;
}
