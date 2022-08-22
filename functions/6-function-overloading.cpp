#include <iostream>
#include <string>
using namespace std;

//complete the function
void add(double a, double b) {

    cout << a + b << endl;
    
}
//overload it to sum doubles
void add() {
    
}

int main() {
    
    //calling
    add(5,6);
    add(1.2, 6.5);
    
    return 0;
}