#include <iostream>
#include <string>
using namespace std;

//complete the function with one default argument
void printOrder(string y, string x = "Black tea") {
    cout << x << endl <<  y << endl;
}

int main() {
    //getting coffee type
    string friendOrder;
    cin >> friendOrder;
    
    printOrder(friendOrder);
    
    return 0;
}