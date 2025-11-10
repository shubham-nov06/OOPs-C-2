//  Program to enter +ve no if -ve then break
#include <iostream>
using namespace std;
int main()
{

    int a = 0;
    for (;;)
    {

        cout << "Enter number = ";
        cin >> a;
        if (a < 0)
        {
            cout << "number is negative ";
            break;
        }
        {
        }
    }
}
