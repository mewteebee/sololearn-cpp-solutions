#include <iostream>
using namespace std;


class Bird {
public:

void makeSound()
{
    cout << "chirp-chirp";
}
};


int main() {
    
    //instantiation
    Bird bird;
    
    //function call
    bird.makeSound();
    
    return 0;
}