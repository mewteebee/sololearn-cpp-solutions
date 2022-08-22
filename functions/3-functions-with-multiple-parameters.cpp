#include <iostream>
using namespace std;

int max(int num1, int num2) {
    //complete the function
    if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main() 
{
    int dice;
    //getting inputs
    int first;
    cin >> first;
    int second;
    cin >> second;
    
    //call the function and print result
    dice = max(first, second);

    cout << dice << endl;
    
    return 0;
}