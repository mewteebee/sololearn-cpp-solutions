#include <iostream>
using namespace std;

int main() 
{

    double bodyTemp;

    cin >> bodyTemp;

    if (bodyTemp >= 36.1 && bodyTemp <= 36.9)
    {
        cout << "OK";
    }
    else
    {
        cout << "Not OK";
    }

    return 0;

}